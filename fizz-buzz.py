def fizz_buzz(n):
    return "FizzBuzz" if n % 15 == 0 else ("Buzz" if n % 5 == 0 else ("Fizz" if n % 3 == 0 else str(n)))