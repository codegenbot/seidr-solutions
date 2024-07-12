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

    result = [str(numbers[0])]
    for num in numbers[1:]:
        if num == ",":
            result.append(",")
        else:
            while len(result) > 1 and str(result[-1]) == ",":
                result.pop()
            result.extend([",", str(num)])
    return result


print(process_numbers())