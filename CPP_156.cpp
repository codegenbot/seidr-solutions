#include <sstream>
#include <unordered_map>

std::string int_to_mini_romank(int num) {
    std::unordered_map<int, std::string> romanMap = {{1000, "m"},
                                                       {900, "cm"},
                                                       {500, "d"},
                                                       {400, "cd"},
                                                       {100, "c"},
                                                       {90, "xc"},
                                                       {50, "l"},
                                                       {40, "xl"},
                                                       {10, "x"},
                                                       {9, "ix"},
                                                       {5, "v"},
                                                       {4, "iv"},
                                                       {1, "i"}};
    std::string result;
    
    for (const auto& pair : romanMap) {
        while (num >= pair.first) {
            num -= pair.first;
            result += pair.second;
        }
    }
    
    return result;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::string result = int_to_mini_romank(num);
    std::cout << "Roman numeral representation: " << result << std::endl;
    return 0;
}