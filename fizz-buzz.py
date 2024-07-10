def fizz_buzz(x):
    s = str(x)
    if s.startswith("Fizz") and s.startswith("Buzz"):
        return "FizzBuzz"
    elif s.startswith("Fizz"):
        return "Fizz"
    elif s.startswith("Buzz"):
        return "Buzz"
    else:
        return s