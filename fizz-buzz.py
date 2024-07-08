def fizz_buzz(x):
    if x % 3 == 0:
        f = "Fizz"
    else:
        f = ""

    if x % 5 == 0:
        b = "Buzz"
    else:
        b = ""

    return f + b or str(x)