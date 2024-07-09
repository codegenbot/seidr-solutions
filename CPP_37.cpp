```c++
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
                for(int j = evenIndex; j < l.size(); j++){
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

int main() 
{
    std::vector<float> input(10);
    input.push_back(5.0f);
    input.push_back(8.0f);
    input.push_back(-12.0f);
    input.push_back(4.0f);
    input.push_back(23.0f);
    input.push_back(2.0f);
    input.push_back(3.0f);
    input.push_back(11.0f);
    input.push_back(12.0f);
    input.push_back(-10.0f);

    std::cout << "Original array: ";
    for (float num : input) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::vector<float> sortedEven = myspace::sort_even(input);
    std::cout << "Sorted even array: ";
    for (float num : sortedEven) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}