def fizz_buzz(n):
    result = []
    for i in range(1, n+1):
        output = ""
        if i % 3 == 0:
            output += "Fizz"
        if i % 5 == 0:
            output += "Buzz"
        if not output:
            output = str(i)
        result.append(output)
    return result