def fizz_buzz(x):
    if x % 3 == 0:
        result = "Fizz"
    else: result = ""
    
    if x % 5 == 0:
        if result: result += "Buzz"
        else: result = "Buzz"
        
    if not result: result = str(x)
    
    return result