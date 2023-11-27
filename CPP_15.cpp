#include <iostream>
#include <string>
#include <cassert>

std::string string_sequence(int n) {
    std::string result;
    for(int i=0; i<n; i++){
        result += std::to_string(i) + " ";
    }
    return result;
}

// Comment out or remove the previous definition
// int main() {
//     assert(string_sequence(10) == "0 1 2 3 4 5 6 7 8 9 ");
//     std::cout << "Test cases passed!" << std::endl;
//     return 0;
// }

// Updated main function
int main() {
    assert(string_sequence(10) == "0 1 2 3 4 5 6 7 8 9 ");
    std::cout << "Test cases passed!" << std::endl;
    return 0;
}