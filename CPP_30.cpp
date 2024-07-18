#include <vector>

bool issame vector<float> (vector<float> l1, vector<float> l2){
    if (l1.size() != l2.size()) {
        return false;
    }
    for (int i = 0; i < l1.size(); i++) {
        if (l1[i] != l2[i]) {
            return false;
        }
    }
    return true;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main(){
    vector<float> l1 = {1.2, -3.4, 5.6, -7.8};
    vector<float> l2 = {-1.2, 3.4, -5.6, 7.8};

    assert(issame vector<float>(l1, l2));
    assert(get_positive(l1).size() == 2);

    return 0;
}
