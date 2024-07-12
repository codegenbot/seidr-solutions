```
def fruit_distribution(s):
    s = s.lower().replace("apples", "0").replace("oranges", "0")
    total_apples_oranges = 0
    current_number = ""
    for part in s.split():
        if part.isdigit() or part == "and":
            if part.isdigit():
                total_apples_oranges += int(part)
                current_number = part
        else:
            if current_number:
                total_apples_oranges += int(current_number)
                current_number = ""
    return -(-total_apples_oranges // 2)