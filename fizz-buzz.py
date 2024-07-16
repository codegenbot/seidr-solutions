def fizz_buzz(x):
    if x % 3 == 0:
        if x % 5 == 0:
            return "FizzBuzz"
        else:
            return "Fizz"
    elif x % 5 == 0:
        return "Buzz"
    else:
        return "{}".format(x) if x < 100 else str(x)