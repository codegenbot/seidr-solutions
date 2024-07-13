def fizz_buzz(x):
    return "FizzBuzz" if str(x).endswith('03') or str(x).endswith('05') else ("Buzz" if x % 5 == 0 else ("Fizz" if x % 3 == 0 else str(x)))