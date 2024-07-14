```
def fizz_buzz(x):
    result = ""
    if x % 3 == 0:
        if x % 5 == 0:
            result = "FizzBuzz"
        else:
            result = "Fizz"
    elif x % 5 == 0:
        result = "Buzz"
    else:
        result = str(x)
    return result