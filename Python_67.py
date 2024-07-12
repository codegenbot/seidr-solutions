```Python
def fruit_distribution(s, total):
    s = s.lower().replace("apples", "0").replace("oranges", "0")
    total_amount = 0
    parts = s.split()
    for part in parts:
        if part.isdigit() or (part == "and" and len(parts) > 2):
            if part.isdigit():
                total_amount += int(part)
        elif part.startswith("and"):
            if part.startswith("and "):
                last_number = int(parts[parts.index(part) - 1])
                total_amount -= (-last_number // 2)
    return -(total_amount // 2)

print(fruit_distribution("1 apples and 100 oranges", 120))