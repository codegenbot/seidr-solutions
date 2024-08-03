#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> reverse_delete(const std::string& s, const std::string& c) {
    std::string result1 = s;
    std::string result2 = c;

    std::reverse(result1.begin(), result1.end());
    std::reverse(result2.begin(), result2.end());
    
    return {result1, result2};
}

int main() {
    std::string s, c;
    std::cin >> s >> c;
    
    auto result = reverse_delete(s, c);
    std::cout << result[0] << " " << result[1] << std::endl;
    
    return 0;
}