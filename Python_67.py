```
def fruit_distribution(s, total):
    s = s.lower().replace("apples", "0").replace("oranges", "0")
    for part in s.split():
        if part.isdigit() or (part.isalpha() and part != "and"):
            if part.isdigit():
                total += int(part)
    return -(-total // 2) if total > 120 else total