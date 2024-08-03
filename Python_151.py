```
def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0)

input_list = input().split()
odd_sum = sum(int(i) for i in input_list if int(i) % 2 != 0)
expected_result = 2 * odd_sum

print(double_the_difference(input_list))