string fizzBuzz(int x) {
    string output;
    if (x % 3 == 0 && x % 5 == 0)
        output = "FizzBuzz";
    else if (x % 3 == 0)
        output = "Fizz";
    else if (x % 5 == 0)
        output = "Buzz";
    else
        output = to_string(x);
    return output;
}