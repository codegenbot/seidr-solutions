def fizz_buzz(x):
    if x % 15 == 0:  
        return "FizzBuzz"
    elif x % 3 == 0:
        if x % 5 != 0:
            return "Fizz"
        else:
            return "FizzBuzz"
    elif x % 5 == 0:
        return "Buzz"
    else:
        return str(x)