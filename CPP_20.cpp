```cpp
#include <vector>
#include <limits>

std::vector<float> find_closest_elements(float num1, float num2, float num3, float num4, float num5) {
    if (num1 == num2 || num1 == num3 || num1 == num4 || num1 == num5 ||
        num2 == num3 || num2 == num4 || num2 == num5 || 
        num3 == num4 || num3 == num5 || num4 == num5) {
        return {};
    }
    
    float min_diff = std::numeric_limits<float>::max();
    pair<float, float> closest_pair;
    
    if (abs(num1 - num2) < min_diff) {
        min_diff = abs(num1 - num2);
        closest_pair = {num1, num2};
    }
    if (abs(num1 - num3) < min_diff) {
        min_diff = abs(num1 - num3);
        closest_pair.first = num1;
        closest_pair.second = num3;
    }
    if (abs(num1 - num4) < min_diff) {
        min_diff = abs(num1 - num4);
        closest_pair.first = num1;
        closest_pair.second = num4;
    }
    if (abs(num1 - num5) < min_diff) {
        min_diff = abs(num1 - num5);
        closest_pair.first = num1;
        closest_pair.second = num5;
    }
    if (abs(num2 - num3) < min_diff) {
        min_diff = abs(num2 - num3);
        closest_pair.first = num2;
        closest_pair.second = num3;
    }
    if (abs(num2 - num4) < min_diff) {
        min_diff = abs(num2 - num4);
        closest_pair.first = num2;
        closest_pair.second = num4;
    }
    if (abs(num2 - num5) < min_diff) {
        min_diff = abs(num2 - num5);
        closest_pair.first = num2;
        closest_pair.second = num5;
    }
    if (abs(num3 - num4) < min_diff) {
        min_diff = abs(num3 - num4);
        closest_pair.first = num3;
        closest_pair.second = num4;
    }
    if (abs(num3 - num5) < min_diff) {
        min_diff = abs(num3 - num5);
        closest_pair.first = num3;
        closest_pair.second = num5;
    }
    if (abs(num4 - num5) < min_diff) {
        min_diff = abs(num4 - num5);
        closest_pair.first = num4;
        closest_pair.second = num5;
    }
    
    return {closest_pair.first, closest_pair.second};
}

bool issame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(abs(a[i] - b[i]) > 1e-9)
            return false;
    }
    return true;
}

int main() {
    std::vector<float> result = find_closest_elements((float)1.1, (float)2.2, (float)3.1, (float)4.1, (float)5.1);
    if (!issame(result, {(float)2.2, (float)3.1})) {
        return 1;
    }
    return 0;
}