```
def fruit_distribution():
    s = input().lower().replace("apples", "0").replace("oranges", "0")
    total = 0
    parts = s.split()
    for part in parts:
        if part.isdigit() or (part == "and" and len(parts) > 2):
            if part.isdigit():
                total += int(part)
        elif part.startswith("and"):
            if part.startswith("and "):
                last_number = int(parts[parts.index(part) - 1])
                total -= (-last_number // 2)
    return -(total // 2)