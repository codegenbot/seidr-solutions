def fizz_buzz(n):
    result = []
    for i in range(1, n+1):
        if i % 3 == 0:
            result.append("Fizz")
        if i % 5 == 0:
            result.append("Buzz")
        if len(result) == 0:
            result.append(str(i))
    return ''.join(result)