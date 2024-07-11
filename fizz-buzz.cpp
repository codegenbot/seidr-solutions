```c++
if (x % 15 == 0)
    return "FizzBuzz";
else if (x % 3 == 0)
    result = "Fizz";
else if (x % 5 == 0)
    result = "Buzz";
else
    return std::to_string(x);