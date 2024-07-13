def fizz_buzz(x):
    result = []
    i = 1
    while i <= x:
        if i % 3 == 0 and i % 5 == 0:
            result.append("FizzBuzz")
        elif i % 3 == 0:
            result.append("Fizz")
        elif i % 5 == 0:
            result.append("Buzz")
        else:
            result.append(str(i))
        i += 1
    return "\n".join(result)