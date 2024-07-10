def fizz_buzz(n):
    result = ""
    if n % 15 == 0:
        result = "FizzBuzz"
    elif n % 3 == 0:
        result = "Fizz"
    elif n % 5 == 0:
        result = "Buzz"
    else:
        result = str(n)
    return result