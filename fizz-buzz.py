```
def fizz_buzz(x):
    if x % 15 == 0:
        return "FizzBuzz"
    elif x % 5 == 0:
        if x % 3 == 0:
            return "FizzBuzz"
        else:
            return "Buzz"
    else:
        return str(x)