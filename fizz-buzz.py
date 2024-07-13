```
def fizz_buzz(x):
    result = ""
    if x % 3 == 0:
        result += "Fizz"
    if x % 5 == 0:
        if result != "":
            result += "Buzz"
        else:
            result = "Buzz"
    if result == "":
        result = str(x)
    return result