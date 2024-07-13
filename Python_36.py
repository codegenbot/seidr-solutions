def fizz_buzz(n: int):
    result = ""
    for i in range(1, n + 1):
        if i % 15 == 0:
            result += "FizzBuzz"
        elif i % 3 == 0:
            result += "Fizz" if i % 5 != 0 else "FizzBuzz"
        elif i % 5 == 0:
            result += "Buzz" if i % 3 != 0 else "FizzBuzz"
        else:
            result += str(i)
    return result