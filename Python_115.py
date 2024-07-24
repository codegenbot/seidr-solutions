def calculate_fuel_cost(fills):
    total_cost = 0
    for i in range(1, fills + 1):
        cost = (i * 3) + (10 if i % 4 != 0 else 7)
        total_cost += cost
    return total_cost


max_fill = None
while max_fill is None:
    try:
        max_fill = int(input("Enter maximum number of fills: "))
    except ValueError:
        print("Invalid input! Please enter an integer.")

print("Maximum number of fills:", max_fill)
print("Total fuel cost for", max_fill, "fills:", calculate_fuel_cost(max_fill))