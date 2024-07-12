def fruit_distribution(s):
    s = s.lower()
    total = 0
    parts = s.split()
    for part in parts:
        if part.isdigit():
            total += int(part)
        elif part.startswith("and"):
            last_number = int(parts[parts.index(part) - 1])
            total -= (last_number // 2)
    return -(total // 2)