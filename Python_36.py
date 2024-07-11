def fizz_buzz(n):
    result = []
    for i in range(1, n+1):
        output = ""
        if i % 3 == 0:
            output += "Fizz"
        if i % 5 == 0:
            output += "Buzz" if output == "" else " Buzz"
        if i % 15 == 0 and output != "":
            continue
        elif i % 15 == 0:
            output += "Fizz Buzz"
        result.append(output if output else str(i))
    return ''.join(result)

while True:
    try:
        n = int(input("Enter a number: "))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")

print(fizz_buzz(n))