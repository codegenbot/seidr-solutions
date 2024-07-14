def fizz_buzz(x):
    if x % 5 == 0:
        return "Buzz"
    elif x % 3 == 0:
        return "Fizz"
    elif x % 15 == 0: 
        return "FizzBuzz"
    else:
        return str(x)