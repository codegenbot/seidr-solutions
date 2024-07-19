```cpp
int main_function() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, input);
    std::cout << flip_case(input) << '\n';
    if(flip_case(input).compare("these violent delights have violent ends") == 0)
        return 0;
    else
        return 1;
}