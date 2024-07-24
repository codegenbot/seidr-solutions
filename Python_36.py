def fizz_buzz(n: int):
    output = ""
    result = []
    for i in range(1, n + 1):
        if i % 15 == 0:
            output = "FizzBuzz"
        elif i % 5 == 0:
            output = "Buzz"
        elif i % 3 == 0:
            output = "Fizz"
        else:
            output = str(i)
        result.append(output)
    return '\n'.join(result)