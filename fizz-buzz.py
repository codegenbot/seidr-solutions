def fizz_buzz(x):
    result = ""

    if x % 15 == 0:  
        return "FizzBuzz"
        
    if x % 3 == 0:  
        result += "Fizz"

    if x % 5 == 0 and not result:  
        return "Buzz" if not result else f"{result}Buzz"

    return str(x) if not result else result