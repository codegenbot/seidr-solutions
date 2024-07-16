def find_max_min_diff(numbers: list) -> tuple:
    max_num = max(numbers)
    min_num = min(numbers)
    diff = max_num - min_num
    return max_num, min_num, diff


try:
    input_numbers = list(map(int, input("Enter comma-separated numbers: ").split(",")))
    result = find_max_min_diff(input_numbers)
    print("Max number:", result[0])
    print("Min number:", result[1])
    print("Difference:", result[2])
except ValueError:
    print("Invalid input. Please enter comma-separated numbers.")