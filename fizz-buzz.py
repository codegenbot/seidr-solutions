def fizz_buzz(x):
    return "FizzBuzz" if str(x).endswith("3") and str(x).endswith("5") else \
           "Fizz" if str(x).endswith("3") else \
           "Buzz" if str(x).endswith("5") else str(x)