def double_the_difference(lst):
    odd_sum = sum(x for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0)
    return odd_sum * 2

# Example usage:
my_list = [1, 2, 3]
result = double_the_difference(my_list)
print(result)