Here is the solution:

int fizzBuzz(int x) {
    if (x % 15 == 0) return 6; // FizzBuzz
    else if (x % 3 == 0) return 4; // Fizz
    else if (x % 5 == 0) return 5; // Buzz
    else return x; // Number
}