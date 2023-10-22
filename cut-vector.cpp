#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
1
0
0

input:
1
10
output:
1
10
0

input:
1
100
output:
1
100
0

input:
1
1000
output:
1
1000
0

input:
1
10000
output:
1
10000
0

*/
int main() {
    int i = 0;
    long long n = 0 ;
    int t = 0 ;
    long long max = LLONG_MIN;
    long long min = LLONG_MAX;
    cin>>t;
    vector<long long> input(t);
    while(i < t){
        cin>>input[i];
        i++;
    }
    multimap<long long, vector<int>> map;
    multimap<long long, vector<int>>::iterator it = map.begin();
    for(int x = 0; x < t; x++) {
        long long sum = 0;
        for(int y = 0; y < t; y++) {
            sum += input[(x + y) % t];
        }
        //cout<<sum<<endl;
        if(sum == max) {
            it = map.insert(make_pair(sum,vector<int>{x}));
        }else if(sum > max) {
            it = map.insert(make_pair(sum,vector<int>{x}));
            max = sum;
        }
        //map.insert(make_pair(sum,vector<int>{x}));
        //cout<<sum<<endl;
    }
    //cout<<max<<endl;
    multimap<long long, vector<int>>::iterator itr = map.begin();
    while(itr != map.end()){
        //cout<<itr->first<<" "<<itr->second[0]<<endl;
        itr++;
    }
    //cout<<endl;
    while(it != map.end()) {
        vector<long long> output;
        int x = it->second[0];
        long long min = LLONG_MAX;
        vector<int> index;
        long long diff = LLONG_MAX;
        for(int y = 0; y < t; y++) {
            sum += input[(x + y) % t];
        }
        for(int y = 0; y < t - 1; y++) {
            long long sum1 = 0;
            for(int z = 0; z < y; z++) {
                sum1 += input[(x + z) % t];
            }
            //cout<<sum1<<endl;
            long long sum2 = 0;
            for(int z = y + 1; z < t; z++) {
                sum2 += input[(x + z) % t];
            }
            //cout<<sum2<<endl;
            if(abs(sum1 - sum2) == diff) {
                diff = abs(sum1 - sum2);
                index.push_back(y);
            }else if(abs(sum1 - sum2) < diff) {
                diff = abs(sum1 - sum2);
                index.clear();
                index.push_back(y);
            }
            diff = min(diff, abs(sum1 - sum2));
        }
        //cout<<endl;
        //cout<<index[0]<<endl;
        //cout<<it->first<<endl;
        output.push_back(input[0]);
        for(int y = 0; y < index[0]; y++) {
            output.push_back(input[(x + y + 1) % t]);
        }
        output.push_back(input[(x + output.size()) % t]);
        if(min > diff) {
            min = diff;
            n = it->first;
            vector<long long> out(output);
            cout<<"Left subarray is: "<<endl;
            for(int z = 0; z < out.size(); z++) {
                cout<<out[z]<<endl;
            }
            output.clear();
            output.push_back(input[0]);
            for(int z = index[0]+1; z < t - 1; z++)
            {
                output.push_back(input[(x + z + 1) % t]);
            }
            output.push_back(input[(x + output.size()) % t]);
            cout<<"Right subarray is:"<<endl;
            for(int z = 0; z < output.size(); z++) {
                cout<<output[z]<<endl;
            }
            //cout<<"With sum: "<<it->first<<endl;
            //cout<<"Spot to divide at: "<<index[0]<<endl;
        }
        it++;
    }
    cout<<"With sum: "<<n<<endl;
    return 0;
}
