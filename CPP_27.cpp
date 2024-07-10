```cpp
#include <iostream>
#include <string>

std::string flip_case(std::string str) {
    std::string result;
    for (char c : str) {
        if (c >= 'a' && c <= 'z') {
            result += c - ('a' - 'A');
        } else if (c >= 'A' && c <= 'Z') {
            result += c - ('A' - 'a');
        } else {
            result += c;
        }
    }
    return result;
}

int driver() {  
    std::string inputStr;
    while (std::getline(std::cin, inputStr)) {  
        if (inputStr.empty()) {
            std::cout << "Error: Input is empty. Please enter a valid string." << std::endl;
            std::cout.flush();
        } else {
            std::cout << "Flipped case: " << flip_case(std::move(inputStr)) << std::endl;
            std::cout.flush();
        }
    }
    return 0;
}

int main(int argc, const char* argv[]) {
    driver();
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}