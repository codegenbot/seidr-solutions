#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            auto temp = {l.begin() + i};
            std::copy_if(l.begin(), l.end(), back_inserter(temp), 
                         [i](float x){return (std::distance(&l[0], &x)) % 2 == 0;});
            sort(temp.begin(), temp.end());
            result.insert(result.end(), temp.begin(), temp.end());
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {2, 4, 5, 8, 11, 12, -10, -12, 23}));
    return 0;
}