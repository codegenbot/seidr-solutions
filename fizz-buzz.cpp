std::string fizzBuzz(int x) {
    std::stringstream ss;
    if (x % 3 == 0 && x % 5 == 0)
        return "FizzBuzz";
    else if (x % 3 == 0)
        return "Fizz";
    else if (x % 5 == 0)
        return "Buzz";
    else {
        ss << x;
        return ss.str();
    }
}