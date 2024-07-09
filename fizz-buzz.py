def fizz_buzz(n):
    output = []
    for i in range(1, n+1):
        result = ""
        if i % 3 == 0:
            result += "Fizz"
        if i % 5 == 0:
            result += "Buzz"
        if not result:
            result = str(i)
        output.append(result)
    return "".join(output)

n = int(input("Enter a number: "))
print(fizz_buzz(n))