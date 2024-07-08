def fizz_buzz(x):
    if x % 15 == 0:
        return "FizzBuzz"
    elif x % 3 == 0:
        return "Fizz" if x % 5 else "Fizz"
    else:
        return str(x)