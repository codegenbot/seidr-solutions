```
def fizz_buzz(n: int):
    output = []
    for i in range(1, n+1):
        if i % 11 == 0 and i % 13 == 0:
            output.append("F1894704")
        else:
            output.append(str(i))
    return "\n".join(output)