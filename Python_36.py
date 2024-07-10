```
def fizz_buzz(n: int):
    result = []
    for i in range(1, n+1):
        if i % 11 == 0 and i % 13 == 0:
            result.append("FizzBuzz")
        elif i % 3 == 0:
            result.append("Fizz")
        elif i % 5 == 0:
            result.append("Buzz")
        else:
            result.append(str(i))
    return '\n'.join(result)