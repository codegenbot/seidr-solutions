def process_numbers():
    user_input = input("Enter numbers separated by spaces and comma as delimiter: ")

    if "," not in user_input:
        print("Invalid input")
        return []

    try:
        numbers = [int(num) for num in user_input.split(",")]
    except ValueError:
        print("Invalid input")
        return []

    result = []
    for num in numbers:
        if num == 0:
            result.append(str(0))
        else:
            result.extend([", ", str(num)])
    return result


print(process_numbers())