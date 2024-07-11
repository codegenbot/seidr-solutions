def fizz_buzz(n: int):
    if n < 1:
        return "Please enter a positive integer"
    result = []
    for i in range(1, n+1):
        output = ""
        if i % 3 == 0:
            output += "Fizz"
        if i % 5 == 0:
            output += "Buzz"
        result.append(output or str(i))
    return "\n".join(result)

print(fizz_buzz(int(input("Enter a number: "))))