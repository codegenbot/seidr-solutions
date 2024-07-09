def fizz_buzz(x):
    result = ""
    if x % 3 == 0:
        result += "Fizz"
    if x % 5 == 0:
        result += "Buzz"
    return result if (result == "Fizz" and "Buzz" in result) or result else str(x)