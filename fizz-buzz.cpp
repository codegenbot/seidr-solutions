```cpp
int main() {
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    if(x % 3 == 0 && x % 5 == 0)
        std::cout << "FizzBuzz";
    else if(x % 3 == 0)
        std::cout << "Fizz";
    else if(x % 5 == 0)
        std::cout << "Buzz";
    else
        std::cout << std::to_string(x);
    std::cout << std::endl;
}