def fizz_buzz(x):
    result = ""
    if x % 3 == 0: result += "Fizz"
    if x % 5 == 0: result += "Buzz"
    if result == '': return str(x)
    return result