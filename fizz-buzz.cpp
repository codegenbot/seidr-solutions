```c++
std::string fizzBuzz(int x) {
    std::string result;
    if (x % 15 == 0) { 
        result = "FizzBuzz";
    } else if (x % 3 == 0) { 
        result = "Fizz";
    } else if (x % 5 == 0) { 
        result = "Buzz";
    } else {
        std::string str = std::to_string(x);
        result = str;
    }
    return result;
}