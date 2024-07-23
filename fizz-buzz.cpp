std::string fizzBuzz(int x) {
    if (x % 15 == 0) { 
        return "FizzBuzz";
    } else if (x % 3 == 0) { 
        return "Fizz";
    } else if (x % 5 == 0) { 
        return "Buzz";
    }
    std::string str = std::to_string(x); // convert to string
    return str;
}