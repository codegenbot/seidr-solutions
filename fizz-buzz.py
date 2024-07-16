def fizz_buzz(x):
    if x % 15 == 0:
        return "FizzBuzz"
    elif x % 3 == 0 or x % 5 == 0:
        if x % 3 == 0 and x % 5 == 0:
            return "FizzBuzz"
        else:
            return "Fizz" if x % 3 == 0 else "Buzz"
    else:
        return str(x)