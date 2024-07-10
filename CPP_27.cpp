```cpp
int driver() {
    std::string result;  
    while (std::getline(std::cin, result)) {  
        if (result.empty()) {
            std::cout << "Error: Input is empty. Please enter a valid string." << std::endl;
        } else {
            std::cout << "Flipped case: " << flip_case(result) << std::endl;
        }
    }
}