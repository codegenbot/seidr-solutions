def fizz_buzz(x):
    if x % 3 == 0:  
        result = "Fizz"
    else:
        result = ""

    if x % 5 == 0:  
        if result: 
            return result + "Buzz"
        else:
            return "Buzz"

    if not result:
        return str(x)
    else:
        return result