def fizz_buzz(limit=100):
    output = []
    for i in range(1, limit + 1):
        if i % 3 == 0 and i % 5 == 0:
            output.append("FizzBuzz")
        elif i % 3 == 0:
            output.append("Fizz")
        elif i % 5 == 0:
            output.append("Buzz")
        else:
            output.append(str(i))
    return '\n'.join(output)

result = fizz_buzz(100000)