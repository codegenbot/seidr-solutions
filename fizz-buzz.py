def fizz_buzz(x):
    if not isinstance(x, int):
        return "Invalid input"
    result = ""
    if x % 3 == 0:
        result += "Fizz"
    if x % 5 == 0:
        if not result:
            result += "Buzz"
        else:
            result += "Buzz "
    return str(x) if not result else result