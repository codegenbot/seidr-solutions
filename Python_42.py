def increment_numbers(l):
    return [num + 1 for num in l]

# Define the `incr_list`
incr_list = [1, 2, 3, 4, 5]

# Call the `increment_numbers` function with `incr_list` as input
result = increment_numbers(incr_list)
print(result)

# Assert statement correction
assert increment_numbers([5, 2, 5, 2, 3, 3, 9, 0, 123]) == [6, 3, 6, 3, 4, 4, 10, 1, 124]