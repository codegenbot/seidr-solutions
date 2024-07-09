def fizz_buzz(x):
    if (int(str(x)) % 3 == 0 and int(str(x)) % 5 == 0):
        return "FizzBuzz"
    elif int(str(x)) % 3 == 0:
        return "Fizz"
    elif int(str(x)) % 5 == 0:
        return "Buzz"
    else:
        return str(x)