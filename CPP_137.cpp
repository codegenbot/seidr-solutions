int main() {
    std::cout << "Enter two values: ";
    int val1;
    float val2;
    std::cin >> val1;

    if (std::cin.fail()) {
        // handle invalid input here
    } else {
        std::string str;
        std::cin >> str;
        // process the string and val1 as needed
    }
    
    int a = val1;  
    std::string b = str;

    if (a > std::stoi(b)) {
        std::cout << "The first number is bigger.\n";
    } else if (a < std::stoi(b)) {
        std::cout << "The second number is bigger.\n";
    } else {
        std::cout << "Both numbers are equal.\n";
    }
    
    return 0;
}