std::string fizzBuzz(int x) {
    if (x % 15 == 0) return "FizzBuzz";
    else if (x % 3 == 0) return (x % 5 != 0) ? "Fizz" : "FizzBuzz";
    else if (x % 5 == 0) return (x % 3 != 0) ? "Buzz" : "FizzBuzz";
    else return std::to_string(x);
}