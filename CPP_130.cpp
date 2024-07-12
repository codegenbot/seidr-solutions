#include <vector>

bool issame(const vector<int>& v1, const vector<int>& v2);

vector<int> tri(int n);

bool issame(const vector<int>& v1, const vector<int>& v2){
    if(v1.size() != v2.size()){
        return false;
    }
    for(int i = 0; i < v1.size(); i++){
        if(v1[i] != v2[i]){
            return false;
        }
    }
    return true;
}

vector<int> tri(int n){
    vector<int> result;
    if(n >= 0){
        result.push_back(3);
        if(n >= 1){
            result.push_back(1);
            if(n >= 2){
                result.push_back(1 + n / 2);
                for(int i = 3; i <= n; i++){
                    if(i % 2 == 0){
                        result.push_back(1 + i / 2);
                    } else {
                        result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
                    }
                }
            }
        }
    }
    return result;
}