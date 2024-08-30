def fizz_buzz(n):
    result = ""
    for i in range(1, n+1):
        if i % 3 == 0:
            result += "Fizz"
        if i % 5 == 0:
            result += "Buzz"
        if not (i % 3 == 0 or i % 5 == 0):
            result += str(i)
        result += "\n"
    return result