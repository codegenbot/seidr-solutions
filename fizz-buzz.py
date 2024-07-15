def fizz_buzz(x):
    result = ""
    
    if x % 15 == 0:  
        return "FizzBuzz"
        
    if x % 3 == 0:  
        if result:
            return result + "Fizz"
        else:
            return "Fizz"

    if x % 5 == 0 and not (x % 3 == 0):
        if result:
            return result + "Buzz"
        else:
            return "Buzz"

    return str(x)