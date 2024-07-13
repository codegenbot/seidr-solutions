def fizz_buzz(x):
    result = "Fizz" if x % 3 == 0 else ""
    result += "Buzz" if x % 5 == 0 and not result else ""
    return result or str(x)