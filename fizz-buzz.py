def fizz_buzz(x):
    result = ""
    if x % 3 == 0:
        result += "Fizz"
    if x % 5 == 0:
        if not result:
            result = "Buzz"
        else:
            result += "Buzz"
    return str(result) if not result else str(x)