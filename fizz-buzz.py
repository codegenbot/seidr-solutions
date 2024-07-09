def fizz_buzz(x):
    result = "FizzBuzz" if x % 15 == 0 else ("Fizz" if x % 3 == 0 and (x % 5 != 0 or "Buzz" in result) else "Buzz" if x % 5 == 0 and (x % 3 != 0 or "Fizz" in result) else str(x))
    return result