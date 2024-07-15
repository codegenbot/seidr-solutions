def fizz_buzz(x):
    result = ""
    
    if x % 15 == 0:  
        return "FizzBuzz"
        
    if x % 5 == 0:
        if x % 3 == 0:
            return "FizzBuzz"
        else:
            return "Buzz"

    if x % 3 == 0:
        return "Fizz"

    return str(x)