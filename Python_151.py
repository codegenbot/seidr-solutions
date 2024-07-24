def double_the_difference(input_list):
    if len(input_list) > 0:
        diff = sum(input_list) - len(input_list)
        return 2 * diff
    else:
        return None

input_list = list(map(int, input("Enter numbers separated by space: ").split()))
print(double_the_difference(input_list))