def fizz_buzz(x):
    result = ""
    if x % 3 == 0:
        result += "Fizz"
    if x % 5 == 0:
        if "Fizz" in result:
            return "FizzBuzz"
        else:
            result += "Buzz"
    if not result:
        return str(x)
    return result