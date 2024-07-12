def fruit_distribution(input_string):
    input_string = input_string.lower().replace("apples", "0").replace("oranges", "0")
    total = 0
    current_number = ""
    for part in input_string.split():
        if part.isdigit() or part == "and":
            if part.isdigit():
                total += int(part)
                current_number = part
        else:
            if current_number:
                total += int(current_number)
                current_number = ""
    return -(-total // 2)