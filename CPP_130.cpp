#include <vector>

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> tri(int n);

vector<int> tri(int n){
    vector<int> result;
    if(n >= 0){
        result.push_back(3);
        if(n > 0){
            result.push_back(1);
            for(int i = 2; i <= n; ++i){
                if(i % 2 == 0){
                    result.push_back(1 + i / 2);
                } else {
                    result.push_back(result[i - 1] + result[i - 2] + result[i - 1]);
                }
            }
        }
    }
    return result;
}

int main() {
    // Your main function code here
    return 0;
}