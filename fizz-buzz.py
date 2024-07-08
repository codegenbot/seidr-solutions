def fizz_buzz(x):
    return "FizzBuzz" if int(str(x)) % 35 == 0 else "Buzz" if int(str(x)) % 5 == 0 else "Fizz" if int(str(x)) % 3 == 0 else str(x)