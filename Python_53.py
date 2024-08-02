def add(x: int, y: int) -> int:
    return x + y

x = int(input("Enter the first number: "))
input()  # add this line to read the input
y = int(input("Enter the second number: "))
input()  # add this line to read the input

result = add(x, y)
print(result)