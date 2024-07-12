def process_numbers():
    user_input = input("Enter numbers separated by delimiter: ")

    if "," not in user_input:
        print("Invalid input")
        return []

    try:
        numbers = [int(num) for num in user_input.split(",")]
    except ValueError:
        print("Invalid input")
        return []

    result = []
    prev_num = None
    for num in numbers:
        if prev_num is not None and abs(prev_num - num) > 1:
            result.append(",")
        result.append(str(num))
        prev_num = num
    return result

print(process_numbers())