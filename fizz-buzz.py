def fizz_buzz(x):
    if not (x % 3 or x % 5):
        return str(x)
    elif x % 3 == 0 and x % 5 == 0:
        return "FizzBuzz"
    elif x % 3 == 0:
        return "Fizz"
    else:
        return "Buzz"