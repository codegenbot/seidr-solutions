def filter_integers(values):
    return [x for x in values if isinstance(x, int)]

filtered_values = filter_integers([1, 'a', 3, 'b', 5])
print(filtered_values)