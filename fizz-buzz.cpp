```cpp
std::string fizzBuzz(int x) {
    std::string result = "";

    if (x % 3 == 0) {
        if (x % 5 == 0) {
            result = "FizzBuzz";
        } else {
            result = "Fizz";
        }
    } else if (x % 5 == 0) {
        result = "Buzz";
    }

    return result.empty() ? std::to_string(x) : result;
}