```cpp
#include <vector>
#include <cmath>

float max_element(const std::vector<float>& l){
    float max = l[0];
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > max) {
            max = l[i];
        }
    }
    return max;
}

int main(){
    std::vector<float> myVector = {5.2, -3.8, 9.4};
    float result = max_element(myVector);
    std::cout << "Maximum element: " << result << "\n";
    return 0;
}