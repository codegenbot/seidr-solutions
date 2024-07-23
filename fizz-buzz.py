def fizz_buzz(x):
    result = ""
    if x % 15 == 0: 
        result = "FizzBuzz"
    elif x % 3 == 0 and x % 5 != 0: 
        result = "Fizz"
    elif x % 5 == 0 and x % 3 != 0:
        result = "Buzz"
    else:
        result = str(x)
    return result