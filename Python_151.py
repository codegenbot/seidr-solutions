```
def double_the_difference(input_list):
    if len(input_list) < 2:
        return 0
    first_half_sum = sum(input_list[:len(input_list)//2])
    second_half_sum = sum(input_list[len(input_list)//2:])
    return abs(first_half_sum - second_half)

input_list = list(map(int, input("Enter numbers separated by space: ").split()))
if len(input_list) < 1:
    print("Invalid Input. Please enter at least one number.")
else:
    print(double_the_difference(input_list))