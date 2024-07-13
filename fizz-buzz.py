def fizz_buzz(x):
    if not isinstance(x, int):
        return 
    elif x % 3 == 0:
        result = "Fizz"
        if x % 5 == 0:
            result = "FizzBuzz"
    else:
        for i in range(1, 6):
            if x % (5 ** i) == 0:
                result += "Buzz" if i * 2 - 1 == 0 or not result else "Buzz "
        for i in range(1, 4):
            if x % (3 ** i) == 0:
                result = "Fizz" + ("Buzz " if i * 2 - 1 != 0 and "Buzz " in result else "") + result
    return str(x) if not result else result