def fizz_buzz(x):
    if x % 15 == 0:
        "FizzBuzz"
    elif x % 3 == 0:
        "Fizz" if x % 5 != 0 else "FizzBuzz"
    elif x % 5 == 0:
        "Buzz"
    else:
        str(x)