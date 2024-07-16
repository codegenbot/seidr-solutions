def fizz_buzz(x):
    if x % 15 == 0:
        return "FizzBuzz"
    elif x % 3 and x % 5:
        return "Fizz" + ("Buzz" if x % 5 else "")
    elif x % 3:
        return "Fizz"
    elif x % 5:
        return "Buzz"
    else:
        return str(x)