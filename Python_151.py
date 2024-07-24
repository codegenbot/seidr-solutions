def double_the_difference(input_list):
    if len(input_list) < 1:
        return 0
    avg = sum(map(float, input_list)) / len(input_list)
    sorted_list = sorted(map(float, input_list))
    diff = abs(sorted_list[len(input_list) // 2] - avg)
    return 2 * diff


input_str = input("Enter numbers separated by space: ")
input_list = list(map(float, input_str.split()))

if any(not isinstance(i, (int, float)) for i in input_list):
    print("Please enter at least one number.")
else:
    print(double_the_difference(input_list))