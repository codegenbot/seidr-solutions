```
def fruit_distribution(s, total):
    s = s.lower().replace("apples", "0").replace("oranges", "0")
    parts = s.split()
    for part in parts:
        if part.isdigit():
            total += int(part)
        elif part == "and":
            if len(parts) > 2:
                return -(-total // 2)
        else:
            return -1
    return -(-total // 2)