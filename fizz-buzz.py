def fizz_buzz(x):
    result = ""
    if x % 3 == 0:
        result += "Fizz"
    if not result:
        result += "Buzz"
    return str(x) if not result else result