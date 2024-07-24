def double_the_difference(input_list):
    diff = sum(input_list) - len(input_list)
    if diff < 0:
        return 2 * abs(diff)
    else:
        return 2 * diff

input_list = list(map(int, input("Enter numbers separated by space: ").split()))
if len(input_list) < 1:
    print("Invalid Input. Please enter at least one number.")
else:
    print(double_the_difference(input_list))