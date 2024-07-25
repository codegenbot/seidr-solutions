def add(a, b):
    return a + b

while True:
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
        break
    except ValueError:
        print("Please enter integer values only.")

result = add(x, y)
print(result)