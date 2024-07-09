#include <vector>
#include <algorithm>

void get_positive(vector<float> l, vector<float>& result);
bool issame(vector<float> a, vector<float> b);

bool issame(vector<float> a, vector<float> b) {
    bool same = true;
    if (!a.empty() && !b.empty()) {
        auto first_a = a[0];
        for (size_t i = 0; i < a.size(); ++i) {
            if (i < b.size() && a[i] != b[i])
                return false;
            if (i >= b.size())
                return false;
            if (a[i] != first_a)
                return false;
        }
        for (size_t i = 0; i < b.size(); ++i) {
            if (b[i] != first_a)
                return false;
        }
        return true;
    }
    return a == b;
}

vector<float> get_positive(vector<float> l, vector<float>& result) {
    result.clear();
    for(float num : l){
        if(num > 0)
            result.push_back(num);
    }
    return result;
}

int main() {
    vector<float> pos_nums = get_positive({-1, 0, 2, -3, 4}, pos_nums);
    // Now you can use your function 'get_positive'
    assert(issame(get_positive({1.0f, 2.0f, 3.0f}, pos_nums), {1.0f, 2.0f, 3.0f}));
    return 0;
}