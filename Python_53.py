def find_max_and_min(input_list):
    if len(input_list) < 2:
        print("Invalid input. Please enter at least two numbers.")
        return None

    max_num = float("-inf")
    min_num = float("inf")

    for num in input_list:
        if not isinstance(num, int) and not isinstance(num, float):
            print("Invalid input. Please enter numbers only.")
            return None
        if num > max_num:
            max_num = num
        if num < min_num:
            min_num = num

    print(f"Maximum number is: {max_num}, Minimum number is: {min_num}")


while True:
    try:
        input_list = list(
            map(float, input("Enter numbers separated by space: ").split())
        )
        find_max_and_min(input_list)
        break
    except ValueError:
        print("Invalid input. Please enter numbers only.")