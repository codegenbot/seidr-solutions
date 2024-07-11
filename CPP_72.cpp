#include<stdio.h>
#include<vector>
using namespace std;

bool will_it_fly(vector<int> q,int w){
    string str = "";
    for(int i:q)str+=to_string(i);
    if(str!=std::string(str.rbegin(), str.end())){
        return false;
    }
    int sum = 0;
    for(int i:q)sum+=i;
    if(sum <= w)return true;
    else return false;
}