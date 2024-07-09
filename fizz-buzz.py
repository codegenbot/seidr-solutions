def fizz_buzz(x):
    str_x = str(x)
    if x % 15 == 0:
        return "FizzBuzz"
    elif x % 5 == 0:
        return "Buzz"
    elif x % 3 == 0:
        return "Fizz"
    return str_x if x % 15 != 0 else "FizzBuzz"