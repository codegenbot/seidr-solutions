def fizz_buzz(x):
    if not (x % 3 and x % 5):  
        return "FizzBuzz"
    elif x % 15:  
        return str(x)
    else:  
        return "Fizz" if x % 3 == 0 and not (x % 5) else "Buzz"