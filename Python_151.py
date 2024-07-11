```
def check(input_string):
    input_list = list(map(int, input_string.split()))
    return double_the_difference(input_list)

def double_the_difference(lst):
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i >= 0)
    return odd_sum * 2