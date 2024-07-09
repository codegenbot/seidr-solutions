```cpp
#include <string>
#include <vector>

std::string concatenate(const std::vector<std::string>& strings) {
    std::string result = "";
    for (const auto& str : strings) {
        result += str;
    }
    return result;
}

int main() {
    const char* strings[] = {"x", "y", "z", "w", "k"};
    int n = sizeof(strings)/sizeof(strings[0]);
    std::vector<std::string> vec_strings(n);
    for(int i=0; i<n; i++) {
        vec_strings[i] = strings[i];
    }
    std::cout << concatenate(vec_strings) << std::endl;
    return 0;
}