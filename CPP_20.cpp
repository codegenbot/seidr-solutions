```cpp
#include <vector>
#include <limits>

std::vector<float> find_closest_elements(float a, float b, float c, float d, float e) {
    if (std::abs(a-b) <= std::abs(b-c) && std::abs(a-b) <= std::abs(c-d) && std::abs(a-b) <= std::abs(d-e)) {
        return {a,b};
    } else if (std::abs(b-c) <= std::abs(a-b) && std::abs(b-c) <= std::abs(c-d) && std::abs(b-c) <= std::abs(d-e)) {
        return {b,c};
    } else if (std::abs(c-d) <= std::abs(a-b) && std::abs(c-d) <= std::abs(b-c) && std::abs(c-d) <= std::abs(d-e)) {
        return {c,d};
    } else {
        return {d,e};
    }
}

int main() {
    std::vector<float> result = find_closest_elements((float)1.1, (float)2.2, (float)3.1, (float)4.1, (float)5.1);
    // Code to test your function goes here
}