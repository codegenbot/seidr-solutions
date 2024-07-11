std::string fizzBuzz(int x) {
    if (x % 15 == 0)
        return "FizzBuzz";
    else if (x % 5 == 0)
        return x % 3 == 0 ? "FizzBuzz" : "Buzz";
    else
        return x % 3 == 0 ? "Fizz" : std::to_string(x);
}