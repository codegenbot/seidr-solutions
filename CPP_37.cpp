#include <algorithm>
#include <vector>

namespace myspace {
    bool issame(const std::vector<float>& a, const std::vector<float>& b) {
        if(a.size() != b.size()) return false;
        for(int i = 0; i < a.size(); i++) {
            if(a[i] != b[i]) return false;
        }
        return true;
    }

    std::vector<float> sort_even(const std::vector<float>& l) {
        std::vector<float> result(l.size());
        int evenIndex = 0;
        for (int i = 0; i < l.size(); i++) {
            if (i % 2 == 0) {
                auto it = std::minmax_element(l.begin(), l.end(),
                    [](float a, float b){ return a<b; });
                result[i] = *(it.first);
                for(int j = 0; j < l.size(); j++){
                    if(j%2==0 && l[j] != *(it.first)){
                        result[evenIndex++] = l[j];
                    }
                }
            } else {
                result[i] = l[i];
            }
        }
        return result;
    }
}

int main() {
    assert(myspace::issame(myspace::sort_even({1.0f, 2.5f, 3.25f, 4.9f}), {2.5f, 3.25f, 4.9f, 1.0f}));
    return 0;
}