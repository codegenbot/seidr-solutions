def fizz_buzz(x):
    if x % 15 == 0:
        return "FizzBuzz"
    elif x % 3 == 0:
        result = "Fizz"
        if x % 5 == 0:
            result = "FizzBuzz"
        return result
    elif x % 5 == 0:
        return "Buzz"
    return str(x)