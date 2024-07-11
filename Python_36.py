```
def fizz_buzz(n: int):
    result = []
    for i in range(1, n+1):
        output = ""
        if i % 3 == 0:
            output += "Fizz"
        if i % 5 == 0:
            output += "Buzz" if output == "" else " Buzz"
        result.append(output if output else str(i))
    return ''.join(result)

while True:
    try:
        n = int(input("Enter a number: "))
        print(fizz_buzz(n))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")