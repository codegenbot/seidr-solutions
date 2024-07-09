def fizz_buzz(n):
    result = []
    for i in range(1, n+1):
        f = ""
        if i % 3 == 0:
            f += "Fizz"
        if i % 5 == 0:
            f += "Buzz"
        if not f:
            f = str(i)
        result.append(f)
    return result