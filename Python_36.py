```
def fizz_buzz(n: int):
    output = []
    for i in range(1, n+1):
        if i % 3 == 0 and i % 5 == 0:
            output.append("fizz buzz")
        elif i % 3 == 0:
            output.append("fizz")
        elif i % 5 == 0:
            output.append("buzz")
        else:
            output.append(str(i))
    return "\n".join(map(str, output))