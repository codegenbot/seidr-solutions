def fizz_buzz(n):
    result = []
    for i in range(1, n+1):
        output = ""
        if i % 3 == 0:
            output = "Fizz"
        if i % 5 == 0:
            output += "Buzz"

        result.append(str(i) if not output else output)
    return result