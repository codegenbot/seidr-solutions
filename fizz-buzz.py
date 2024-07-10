def fizz_buzz(x):
    result = ""
    if x % 3 == 0:
        result += "Fizz"
    if x % 5 == 0:
        if "Fizz" in result:
            result = "FizzBuzz"
        else:
            result += "Buzz"
    if not result:
        result = str(x)
    return result