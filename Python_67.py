Here is the modified code:

def fruit_distribution(*s):
    total = 0
    for s_part in s:
        s_part = s_part.lower()
        for part in s_part.split():
            if part.isdigit():
                total += int(part)
            elif part.startswith("and"):
                last_number = int(s_part.split()[s_part.split().index(part) - 1])
                total -= (last_number // 2)
    return -(total // 2)