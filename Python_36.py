```
def fizz_buzz(n: int):
    output = []
    for i in range(1, n+1):
        output_str = ""
        if i % 3 == 0:
            output_str += "fizz"
        if i % 5 == 0:
            output_str += " buzz" if output_str else "buzz"
        output.append(output_str or str(i))
    return "\n".join(map(str, output))