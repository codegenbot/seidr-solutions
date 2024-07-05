```
def fizz_buzz(x):
    result = ""
    if x % 3 == 0 and x % 5 == 0:
        result += "FizzBuzz"
    elif x % 5 == 0:
        result += "Buzz"
    elif x % 3 == 0:
        result += "Fizz"
    else:
        result = str(x)
    return result