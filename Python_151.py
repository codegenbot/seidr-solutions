```
def double_the_difference(input_list):
    if len(input_list) < 1:
        return "Please enter at least one number"
    avg = sum(input_list) / len(input_list)
    sorted_list = sorted(input_list)
    diff = abs(sorted_list[len(input_list)//2] - avg)
    return 2 * diff

input_list = list(map(int, input("Enter numbers separated by space: ").split()))
if len(input_list) > 0:
    print(double_the_difference(input_list))
else:
    print("Please enter at least one number")