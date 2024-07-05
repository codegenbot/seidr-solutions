#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
#include <string>

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

std::string words_in_sentence(std::string sentence) {
    std::istringstream iss(sentence);
    std::string word, result = "";
    while (iss >> word) {
        if (is_prime(word.length())) {
            if (!result.empty()) result += " ";
            result += word;
        }
    }
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << words_in_sentence(input) << std::endl;
    return 0;
}

// Commented out duplicate main function
// int main(){
//    // some other function here for testing 
//}