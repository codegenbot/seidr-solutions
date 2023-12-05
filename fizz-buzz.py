
def fizz_buzz(x):
    if divmod(x, 15) == (0, 0):
        return "FizzBuzz"
    elif divmod(x, 3) == (0, 0):
        return "Fizz"
    elif divmod(x, 5) == (0, 0):
        return "Buzz"
    else:
        return str(x)