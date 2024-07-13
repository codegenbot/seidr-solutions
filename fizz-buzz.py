def fizz_buzz(x):
    result = ""
    if x % 3 == 0: result += "Fizz"
    if x % 5 == 0:
        if result: result += "Buzz"
        else: return "Buzz"
    return result if result else str(x)