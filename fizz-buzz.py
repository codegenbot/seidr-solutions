def fizz_buzz(x):
    result = ""
    if x % 3 == 0:
        if x % 5 == 0:
            result = "FizzBuzz"
        else:
            result = "Fizz"
    elif x % 5 == 0:
        result = "Buzz"
    return str(x) if not result else result