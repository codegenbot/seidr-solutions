#include <vector>
#include <algorithm>

bool isSame(std::vector<float> v1, std::vector<float> v2) {
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i]) return false;
    }
    return true;
}

std::vector<float> sortEven(std::vector<float> l) {
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
    std::vector<float> output = sortEven(input);
    for(float f : output) {
        std::cout << f << " ";
    }
    if (!isSame({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}, {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10})) {
        std::cout << "Test failed";
    }
    return 0;
}