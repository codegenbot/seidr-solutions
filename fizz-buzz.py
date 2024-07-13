```
def fizz_buzz(x):
    if not isinstance(x, int) or x > 30:
        return "Invalid input"
    elif x % 3 == 0 and x % 5 == 0:
        return "FizzBuzz"
    elif x % 3 == 0:
        return "Fizz"
    elif x % 5 == 0:
        return "Buzz"
    else:
        return str(x)