Here is the solution:

int fizzBuzz(int x) {
    if (x % 3 == 0 && x % 5 == 0) return std::to_string(x).append("FizzBuzz");
    else if (x % 3 == 0) return "Fizz";
    else if (x % 5 == 0) return "Buzz";
    else return std::to_string(x);
}