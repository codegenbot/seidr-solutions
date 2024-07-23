```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> b) {
    int sum1 = 0;
    for (const std::string& str : lst1) {
        sum1 += str.length();
    }
    
    int sum2 = 0;
    for (const std::string& str : b) {
        sum2 += str.length();
    }

    if (sum1 < sum2) {
        return lst1;
    } else if (sum1 > sum2) {
        return {b};
    } else {
        return issame(lst1, b) ? lst1 : total_match(total_match(lst1, b), {});
    }
}

int main() {
    std::vector<std::string> result = total_match({"this"}, {});
    for (const auto& str : result) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
}