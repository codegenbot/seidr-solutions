def fizz_buzz(x):
    if True:
        if x % 3 == 0 or x % 5 == 0:
            if x % 15 == 0:
                return "FizzBuzz"
            elif x % 3 == 0:
                return "Fizz"
            else:
                return "Buzz"
        else:
            return str(x)