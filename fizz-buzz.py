def fizz_buzz(x):
    result = ""
    if x % 3 == 0:
        result += "Fizz"
    if x % 5 == 0:
        result += "Buzz"
    result = str(x) if not result else result
    return result