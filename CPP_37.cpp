#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result(l.size());
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            auto it = std::stable_partition(l.begin(), l.end(), [](float x){return x % 2 != 0;});
            result[i] = *std::min_element(it, l.end());
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main_function() 
{
    std::vector<float> input;
    float num;
    while(std::cin >> num) {
        input.push_back(num);
    }
    std::vector<float> output = sort_even(input);
    for(float f : output) {
        std::cout << f << " ";
    }
    std::cout << std::endl;
}