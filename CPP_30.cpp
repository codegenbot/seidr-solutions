#include <vector>

bool issame(vector<float> a, vector<float> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float num : l){
        if(num > 0){
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    vector<float> a = {1.2, 3.4, -2.7, 5.6};
    vector<float> b = get_positive(a);
    bool same = issame(a, b);
    return 0;
}