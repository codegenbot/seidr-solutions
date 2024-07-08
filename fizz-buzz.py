def fizz_buzz(x):
    if (x % 15 == 0): 
        return "FizzBuzz"
    elif (x % 3 == 0) and (x % 5 != 0): 
        return "Fiz"
    else: 
        return "Buzz" if x % 5 == 0 else str(x)