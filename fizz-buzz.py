def fizz_buzz(x):
    if isinstance(x, int) and x % 3 == 0 and x % 5 == 0:
        return "FizzBuzz"
    elif isinstance(x, int) and x % 3 == 0:
        return "Fizz"
    elif isinstance(x, int) and x % 5 == 0:
        return "Buzz"
    else:
        return str(x)