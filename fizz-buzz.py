def fizz_buzz(x):
    output = ""
    if x % 15 == 0:
        output = "FizzBuzz"
    elif x % 3 == 0:
        output = "Fizz"
    elif x % 5 == 0:
        output = "Buzz"
    else:
        output = str(x)
    return output