def add():
    total = 0
    while True:
        x = input("Enter the first number (or 'stop' to finish): ")
        if x.lower() == 'stop':
            break
        y = int(input("Enter the second number: "))
        total += y
    return total

print(add())