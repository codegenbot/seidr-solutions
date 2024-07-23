def fizz_buzz(x):
    s = str(x)
    if x % 3 == 0 and x % 5 == 0: 
        return "FizzBuzz"
    elif x % 3 == 0: 
        return "Fizz" + s
    elif x % 5 == 0: 
        return "Buzz" + s
    else:
        return s