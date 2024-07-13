def fizz_buzz(x):
    result = ""
    if x % 15 == 0:
        result += "FizzBuzz"
    elif x % 3 == 0:
        result += "Fizz"
    elif x % 5 == 0:
        result += "Buzz"
    return str(result) + str(x) if result else str(x)