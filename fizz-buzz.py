def fizz_buzz(x):
    try:
        if x % 3 == 0 and x % 5 == 0:
            return "FizzBuzz"
        elif x % 3 == 0:
            return "Fizz"
        elif x % 5 == 0:
            return "Buzz"
        else:
            if x == 1:
                return "FizzBuzz"
            else:
                return str(x)
    except ValueError:
        print("Invalid input")