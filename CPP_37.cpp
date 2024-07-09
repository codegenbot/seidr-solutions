```
#include <algorithm>
#include <vector>

namespace myspace {
    bool issame(std::vector<float>& a, std::vector<float>& b) {
        if(a.size() != b.size()) return false;
        for(int i = 0; i < a.size(); i++) {
            if(a[i] != b[i]) return false;
        }
        return true;
    }

    std::vector<float> sort_even(std::vector<float>& l) {
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
    std::vector<float> inputVec;
    float num;
    
    while(std::cin >> num) {
        inputVec.push_back(num);
    }

    if (myspace::issame(inputVec, myspace::sort_even(inputVec))) {
        for(float f : inputVec) {
            std::cout << f << " ";
        }
        std::cout << std::endl;
    } else {
        for(float f : inputVec) {
            std::cout << f << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}