```
while True:
    try:
        max_fill = int(input("Enter maximum number of fills: "))
        break
    except ValueError:
        print("Invalid input! Please enter a valid integer.")