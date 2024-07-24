```Python
max_fill = None
while max_fill is None:
    try:
        max_fill = int(input("Enter maximum number of fills: "))
    except ValueError:
        print("Invalid input! Please enter an integer.")

print("Maximum number of fills:", max_fill)