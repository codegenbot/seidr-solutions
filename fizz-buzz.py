def fizz_buzz(x):
    if x % 3 == 0 and x % 5 == 0:
        return "FizzBuzz"
    result = ""
    if x % 3 == 0:
        result += "Fizz"
    if x % 5 == 0:
        if result:
            result += "Buzz"
        else:
            result = "Buzz"
    return str(x) if not result else result