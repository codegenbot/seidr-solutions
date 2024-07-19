def filter_integers(values):
    return [value for value in values if isinstance(value, int)]

result = filter_integers([1, 'a', 3.14, 5, 'b'])
print(result)