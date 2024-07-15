```
def fizz_buzz(x):
    result = ""

    if x % 3 == 0 and x % 5 == 0:  
        return "FizzBuzz"
        
    if x % 3 == 0:  
        return "Fizz"

    if x % 5 == 0:
        return "Buzz"

    return str(x)