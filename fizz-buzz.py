def fizz_buzz(x):
    if x % 5 == 0:
        if x % 3 == 0:
            return "FizzBuzz"
        else:
            return "Buzz"
    elif x % 3 == 0:
        return "Fizz"
    else:
        return str(x)