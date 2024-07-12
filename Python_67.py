```
def fruit_distribution(s):
    s = s.lower().replace("apples", "0").replace("oranges", "0")
    total = 0
    current_number = ""
    for part in s.split():
        if part.isdigit() or part == "and":
            if part.isdigit():
                total += int(part)
                current_number = part
        else:
            if current_number:
                total += int(current_number)
                current_number = ""
    return -(-total // 2)

check(fruit_distribution("1 apples and 100 oranges"))