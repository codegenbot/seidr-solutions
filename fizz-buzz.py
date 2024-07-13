def fizz_buzz(x):
    if x % 15 == 0:
        return "FizzBuzz"
    elif x % 3 == 0:
        result = "Fizz"
    elif x % 5 == 0:
        result = "Buzz"
    else:
        result = str(x)
    return result