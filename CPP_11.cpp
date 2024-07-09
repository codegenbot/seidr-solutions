std::string string_xor(const std::string& a, const std::string& b) {
    if (a.length() != b.length())
        throw std::invalid_argument("Input strings must have the same length.");

    std::string result = "";
    for (int i = 0; i < a.length(); i++) {
        char c = (a[i] - '0' ^ b[i] - '0') + '0';
        result += c;
    }
    return result;
}

int main() {
    assert(string_xor("0101", "0000") == "0101");
    
    std::string str1, str2;
    try {
        std::cout << "Enter the first string: ";
        std::getline(std::cin, str1);
        
        std::cout << "Enter the second string: ";
        std::getline(std::cin, str2);

        if (str1.length() > 0 && str2.length() > 0) {  
            try {
                const std::string result = string_xor(str1, str2);
                std::cout << "XOR of the two strings is: " << result << std::endl;
            } catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
        } else if (!str1.empty()) { 
            try {
                for (char c : str1) {
                    if (c != '0' && c != '1') {
                        throw std::invalid_argument("Input strings must contain only 0's and 1's.");
                    }
                }
                std::cout << "Error: No second input string provided." << std::endl;
            } catch (const std::invalid_argument& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
        } else { 
            std::cout << "No input strings provided." << std::endl;
        }
    } catch (...) { 
        std::cout << "An error occurred." << std::endl;
    }
}