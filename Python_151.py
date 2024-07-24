def double_the_difference(input_list):
    if len(input_list) < 2:
        return 0
    avg = sum(input_list) / len(input_list)
    diff = abs(max(input_list) - min(input_list)) - abs(avg - min(input_list))
    return 2 * diff


while True:
    try:
        input_str = input("Enter numbers separated by space: ")
        if not input_str.strip():
            print("Please enter some numbers.")
            continue
        input_list = list(map(float, input_str.split()))
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by space.")

print(double_the_difference(input_list))