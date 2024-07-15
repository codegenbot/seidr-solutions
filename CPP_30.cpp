#include <vector>

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float num : l){
        if(num > 0){
            result.push_back(num);
        }
    }
    return result;
}

bool is_same(vector<float> a, vector<float> b) {
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

int main() {
    vector<float> list1 = {1.5, -2.3, 3.7, -4.1};
    vector<float> list2 = {1.5, -2.3, 3.7, -4.1};

    bool result = is_same(list1, list2);

    return 0;
}