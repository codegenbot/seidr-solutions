def fruit_distribution(s, total):
    s = s.lower().replace("apples", "0").replace("oranges", "0")
    parts = s.split()
    for part in parts:
        if part.isdigit() or (part == "and" and len(parts) > 2):
            if part.isdigit():
                total += int(part)
        elif part.startswith("and"):
            return -(-total // 2)
    return -(-total // 2)