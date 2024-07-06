def sum_squares(lst):
    total = 0
    for i in range(len(lst)):
        if i % 3 == 0 and i % 4 != 0:
            total += lst[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total += lst[i] ** 3
    return total


names_and_numbers = {}
while True:
    name = input(
        "Enter names and phone numbers separated by space (separate names and numbers with comma), each on a new line: "
    )
    if not name:
        break
    items = name.split(", ")
    for item in items:
        key, value = item.split(" ", 1)
        names_and_numbers[key] = int(value)
print(names_and_numbers)