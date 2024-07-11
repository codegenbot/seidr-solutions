```
def add():
    total = 0
    while True:
        x = int(input("Enter the first number (or 'stop' to finish): "))
        if x.lower() == 'stop':
            break
        y = int(input("Enter the second number: "))
        total += x + y
    return total

print(add())