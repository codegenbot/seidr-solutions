#include <vector>
bool issame(int num){
    vector<int> res = tri(num);
    for(int i=0; i<res.size(); ++i){
        if(res[i] != 1 && res[i] != 2 && res[i] != 3){
            return false;
        }
    }
    return true;
}

vector<int> tri(int n){
    vector<int> result;
    if (n >= 0) {
        result.push_back(3);
        if (n > 0) {
            result.push_back(1);
            if (n > 1) {
                result.push_back(2);
                for (int i = 3; i <= n; ++i) {
                    if (i % 2 == 0) {
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