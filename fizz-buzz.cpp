std::string fizzBuzz(int x) {
    if (x % 15 == 0) return "FizzBuzz";
    if (x % 3 == 0) return x % 5 == 0 ? "Fizz" : "Fizz";
    if (x % 5 == 0) return "Buzz";
    return std::to_string(x);