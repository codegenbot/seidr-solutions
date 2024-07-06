def fruit_distribution(s, n):
    s = s.replace("apples", "0").replace("oranges", "0")
    parts = s.split()
    total = int(parts[1])  
    for part in parts[2:]:
        if part.isdigit():
            total += int(part)  
    return n - total