def filter_integers(values):
    return [value for value in values if isinstance(value, int)]

input_values = [1, 'apple', 3.14, 42, 'banana']
result = filter_integers(input_values)
print(result)