```cpp
#include <vector>
#include <limits>

std::vector<float> find_closest_elements(float num1, float num2, float num3, float num4, float num5) {
    if (num1 >= num2 && num1 >= num3 && num1 >= num4 && num1 >= num5) {
        return {num1};
    }
    else if (num2 >= num1 && num2 >= num3 && num2 >= num4 && num2 >= num5) {
        return {num2};
    }
    else if (num3 >= num1 && num3 >= num2 && num3 >= num4 && num3 >= num5) {
        return {num3};
    }
    else if (num4 >= num1 && num4 >= num2 && num4 >= num3 && num4 >= num5) {
        return {num4};
    }
    else {
        return {num5};
    }
}

int main() {
    std::vector<float> result = find_closest_elements((float)1.1, (float)2.2, (float)3.1, (float)4.1, (float)5.1);
    return 0;
}