using namespace std;

string fizzBuzz(int x) {
    if (x % 15 == 0)
        return "FizzBuzz";
    else if (x % 5 == 0)
        return x % 3 == 0 ? "FizzBuzz" : "Buzz";
    else if (x % 3 == 0)
        return "Fizz";
    else
        return to_string(x);