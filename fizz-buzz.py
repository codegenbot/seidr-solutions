def fizz_buzz(x):
    if x % 15 == 0:
        return "FizzBuzz\n"
    elif x % 3 == 0:
        return "Fizz\n"
    elif x % 5 == 0:
        return "Buzz\n"
    else:
        return str(x)