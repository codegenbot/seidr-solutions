def fizz_buzz(x):
    if x % 3 == 0 and x % 5 == 0:
        return f"FizzBuzz"
    elif x % 3 == 0:
        return f"Fizz"
    elif x % 5 == 0:
        return f"Buzz"
    else:
        return str(x)