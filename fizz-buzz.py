def fizz_buzz(x):
    if not isinstance(x, int):
        return "Invalid input"
    result = ""
    if x % 3 == 0:
        result += "Fizz"
    if x % 5 == 0:
        result += "Buzz" if not result else "Buzz "
    return str(x) if not result else result