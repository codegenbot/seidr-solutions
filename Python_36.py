def fizz_buzz(n):
    result = []
    for i in range(1, n+1):
        output = ""
        if i % 3 == 0:
            output += "Fizz"
        if i % 5 == 0:
            output += "Buzz" if output == "" else " Buzz"
        if i % 15 == 0:
            output += "Fizz Buzz"
        if not output:
            output = str(i)
        result.append(output)
    return '\n'.join(result)

while True:
    try:
        n = int(input("Enter a number: "))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")

print(fizz_buzz(n))