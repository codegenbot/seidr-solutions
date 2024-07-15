def fizz_buzz(x):
    if x % 5 == 0:
        result = "Buzz"
    elif x % 3 == 0:
        result = "Fizz"
    else:
        result = str(x)
    return result