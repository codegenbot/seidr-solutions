def fizz_buzz(x):
    x_str = str(x)
    if int(x_str) % 3 == 0 and int(x_str) % 5 == 0:
        return "FizzBuzz"
    elif int(x_str) % 3 == 0:
        return "Fizz"
    elif int(x_str) % 5 == 0:
        return "Buzz"
    else:
        return x_str