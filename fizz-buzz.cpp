#include <string>
#include <sstream>

std::string* fizzBuzz(int x) {
    if (x % 3 == 0 && x % 5 == 0)
        return new std::string("FizzBuzz");
    else if (x % 3 == 0)
        return new std::string("Fizz");
    else if (x % 5 == 0)
        return new std::string("Buzz");
    else
        return new std::string(std::to_string(x));
}

int main() {
    int x = 15; 
    std::cout << (*fizzBuzz(x)) << std::endl;
    delete fizzBuzz(x); // don't forget to delete the memory!
    return 0;
}