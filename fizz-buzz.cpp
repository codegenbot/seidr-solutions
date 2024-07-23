std::string fizzBuzz(int x) {
    std::string result = "";
    
    if (x % 3 == 0) {
        result += "Fizz";
    }
    if (x % 5 == 0) {
        if (result.empty()) {
            return "Buzz";
        } else {
            result += "Buzz";
        }
    }
    
    if (result.empty()) {
        return std::to_string(x);
    }
    
    return result;
}