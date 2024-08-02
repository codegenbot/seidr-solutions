#include <iostream>
#include <vector>

bool issame(vector<int> a,vector<int>b){
    return a==b;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<vector<int>> result(1);
    for(int i = 0; i < arr.size(); i++) {
        bool found = false;
        for(int j = 0; j < result.size(); j++) {
            if(issame(result[j], vector<int>(arr.begin() + i, arr.begin() + i + k))) {
                found = true;
                break;
            }
        }
        if(!found) {
            result.push_back(vector<int>(arr.begin() + i, arr.begin() + i + k));
        }
    }
    return result[0];
}