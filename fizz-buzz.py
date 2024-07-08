def fizz_buzz(x):
    if not (x % 3 or x % 5):
        return "FizzBuzz"
    elif x % 3 == 0:
        return "Fizz" if x % 5 else "Fizz"
    else:
        return "Buzz" if not x % 5 else "Buzz"