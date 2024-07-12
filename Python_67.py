def fruit_distribution(s, total):
    s = s.lower().replace("apples", "0").replace("oranges", "0")
    total_fruit = 0
    current_number = ""
    for part in s.split():
        if part.isdigit() or part == "and":
            if part.isdigit():
                total_fruit += int(part)
                current_number = part
        else:
            if current_number:
                total_fruit += int(current_number)
                current_number = ""
    return -(-total_fruit // 2)