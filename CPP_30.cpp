#include <vector>

bool issame vector<float> (vector<float> l, vector<float> r) {
    if (l.size() != r.size()) {
        return false;
    }
    for (int i = 0; i < l.size(); ++i) {
        if (l[i] != r[i]) {
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

int main() {
    vector<float> input = {1.2, -3.4, 5.6, -7.8};
    vector<float> expected_output = {1.2, 5.6};

    assert(issame vector<float>(get_positive(input), expected_output));
}