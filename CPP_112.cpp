#include <iostream>

int main() {
    std::string s, c;
    std::cin >> s >> c;
    
    auto result = reverse_delete(s, c);
    std::cout << result[0] << " " << result[1] << std::endl;
    
    return 0;
}