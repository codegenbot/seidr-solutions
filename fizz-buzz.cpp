string fizzBuzz(int x) {
    string res;
    if (x % 3 == 0 && x % 5 == 0)
        res = "FizzBuzz";
    else if (x % 3 == 0)
        res = "Fizz";
    else if (x % 5 == 0)
        res = "Buzz";
    else
        res = to_string(x);
    return res;