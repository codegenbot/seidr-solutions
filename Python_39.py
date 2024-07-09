n = int(input("Enter a number: "))
while True:
    try:
        n = int(input("Enter a number: "))
        break
    except ValueError:
        print("Please enter a valid number.")