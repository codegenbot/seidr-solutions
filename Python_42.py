def increment_numbers(l):
    return [num + 1 for num in l]

# Define the `incr_list`
incr_list = [5, 2, 5, 2, 3, 3, 9, 0, 123]

# Call the `increment_numbers` function with `incr_list` as input
result = increment_numbers(incr_list)
print(result)

# Fix the assertion statement by changing incr_list to result
assert result == [6, 3, 6, 3, 4, 4, 10, 1, 124]