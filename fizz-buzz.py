def fizz_buzz(x):
    if x % 3 == 0 and x % 5 == 0:
        return "FizzBuzz"
    if x % 3 == 0:
        return "Fizz"
    if x % 5 == 0:
        return "Buzz"
    else:
        return str(x)