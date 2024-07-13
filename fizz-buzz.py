def fizz_buzz(x):
    result = ""
    if x % 3 == 0: result += "Fizz"
    if x % 5 == 0: result += "Buzz" if not result else "FizzBuzz"
    return str(x) if not result else result