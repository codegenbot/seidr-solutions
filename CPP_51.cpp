int main{
    std::cout << "Enter a string: ";
    std::string input;  
    std::getline(std::cin, input);  
    
    std::cout << "String after removing vowels: " << remove_vowels(input) << std::endl;
}