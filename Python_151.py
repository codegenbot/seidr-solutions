def double_the_difference(lst):
    return sum((x * 2) for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0)

# Example of how to use the function:
input_list = [3, 5, 2, 'a', 7, 4]
result = double_the_difference(input_list)
print(result)