def fruit_distribution(*s):
    s = [i.lower() for i in str(s)]
    total = 0
    parts = ' '.join(map(str, s)).replace("apples", "0").replace("oranges", "0")
    parts = parts.split()
    for part in parts:
        if part.isdigit() or (part == "and" and len(parts) > 2):
            if part.isdigit():
                total += int(part)
        elif part.startswith("and"):
            if part.startswith("and "):
                last_number = int(parts[parts.index(part) - 1])
                total += -(-last_number // 2)
    return -(-total // 2)