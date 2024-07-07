def fizz_buzz(x):
    if x % 3 == 0:
        if x % 5 != 0:
            return "Fizz"
        else:
            return "FizzBuzz"
    else:
        return str(x)