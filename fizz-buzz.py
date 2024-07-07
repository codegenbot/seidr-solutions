```
def fizz_buzz(x):
    result = ""
    if x % 3 == 0:
        result += "Fizz"
    if x % 5 == 0:
        if not result: result = "Buzz" 
        else: result += "Buzz"
    return result or str(x)