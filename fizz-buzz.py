```
def fizz_buzz(x):
    result = ""
    if x % 3 == 0: 
        result += "Fizz"
    if x % 5 == 0: 
        if result == "": result += "Buzz" elif result != "FizzBuzz": result += " Buzz" else: pass
    if not result: 
        result = str(x)
    return result