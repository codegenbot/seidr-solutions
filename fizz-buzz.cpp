std::string fizzBuzz(int x) {
    std::string result;
    if (x % 15 == 0)
        return "FizzBuzz";
    else if (!(x % 3))
        return "Fizz";
    else if (!(x % 5))
        return "Buzz";
    else
        return std::to_string(x);
}