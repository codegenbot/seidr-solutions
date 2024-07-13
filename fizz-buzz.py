def fizz_buzz(x):
    result = ""
    if x % 3 == 0:
        result += "Fizz"
    if x % 5 == 0:
        if not result:  
            result = "Buzz"
        elif not result.startswith("Fizz"):
            result += "Buzz"
    return str(x) if not result else result