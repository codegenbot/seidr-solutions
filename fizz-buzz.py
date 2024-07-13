def fizz_buzz(x):
    return "Fizz" if x % 3 == 0 else ("Buzz" if x % 5 == 0 else "FizzBuzz" if x % 15 == 0 else str(x))