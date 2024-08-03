#include <vector>
#include <algorithm>

bool issame(vector<float> a,vector<float>b){
    return a == b;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    sort(result.begin(),result.end());
    vector<float> temp;
    int count = 1;
    for(int i=0; i < result.size(); i++) {
        if(i==0 || !issame({result[i]}, {result[i-1]})) {
            temp.push_back(result[i]);
            count++;
        }
    }
    return temp;
}