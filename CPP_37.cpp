#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

vector<float> sort_even(vector<float> l){
    vector<float> result;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){ // even index, sort the values
            vector<float> temp(l.begin() + i, l.begin() + i+1);
            sort(temp.begin(), temp.end());
            result.push_back(temp[0]);
        } else { // odd index, keep the value as it is
            result.push_back(l[i]);
        }
    }
    return result;
}