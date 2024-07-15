```
def fizz_buzz(x):
    result = ""

    elif x % 3 == 0 and x % 5 == 0:  
        return "FizzBuzz"
        
    if x % 3 == 0:  
        result += "Fizz"

    if x % 5 == 0:
        result += "Buzz"

    return str(x) if not result else result