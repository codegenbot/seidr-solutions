def fizz_buzz(x):
    if x % 15 == 0:
        return "FizzBuzz"
    elif x % 3 == 0 and not x % 5:
        return "Fizz"
    elif not x % 3 and x % 5:
        return "Buzz"
    else:
        return str(x)