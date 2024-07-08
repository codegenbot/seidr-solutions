```cpp
std::string fizzBuzz(int x) {
    if (x % 15 == 0) return "FizzBuzz";
    else if (x % 5 == 0) return x % 3 ? "Buzz" : "Buzz";
    else if (x % 3 == 0) return "Fizz";
    else return std::to_string(x);
}