```
#include <vector>
#include <iostream>

bool same(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return false;
    return true;
}

int mainFunc() {
    std::vector<float> input;
    float num;
    while(std::cin >> num) {
        input.push_back(num);
    }
    std::vector<float> result = get_positive(input);
    assert(same(result, {0.5f, 1.0f, 2.0f}));
    return 0;
}

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> result;
    for(float num : l){
        if(num > 0)
            result.push_back(num);
    }
    return result;
}