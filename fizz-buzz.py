def fizz_buzz(x):
    result = ""
    if x % 5 == 0:
        if x % 3 == 0:
            return "FizzBuzz"
        return "Buzz"
    if x % 3 == 0:
        return "Fizz"
    return str(x)