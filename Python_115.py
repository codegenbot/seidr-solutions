```
max_fill = int(input("Enter maximum number of fills: "))
current_fill = 0
while current_fill <= max_fill:
    fill = input(f"Enter a value for fill {current_fill+1}: ")
    if not fill.isnumeric():
        print("Invalid input. Please enter a numeric value.")
        continue
    fill = int(fill)
    current_fill += 1