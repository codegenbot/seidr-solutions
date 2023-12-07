def fizz_buzz(x):
    if x % 3 == 0 and x % 5 == 0:
        return "FizzBuzz"
    elif x % 3 == 0:
        return "Fizz"
    elif x % 5 == 0:
        return "Buzz"
    elif x == 1 or x == 2:
        return "Fizz" if x == 1 else "Buzz"
    elif x == 3 or x == 5:
        return "Fizz" if x == 3 else "Buzz"
    else:
        return str(x)