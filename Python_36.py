def fizz_buzz(n):
    result = []
    for i in range(1, n+1):
        output = ""
        if i % 3 == 0:
            output += "Fizz"
        if i % 5 == 0:
            output += "Buzz" if output == "" else " Buzz"
        output = str(i) if not output else output
        result.append(output)
    return ''.join(result)

while True:
    try:
        n = int(input("Enter a number: "))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")

print(fizz_buzz(n))