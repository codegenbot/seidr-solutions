```cpp
int main_function() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input); 
    std::cout << flip_case(input) << '\n';
    if(flip_case(input) == "these violent delights have violent ends")
        return 0;
    else
        return 1;
}