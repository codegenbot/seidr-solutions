def filter_int_values(values):
    return [value for value in values if isinstance(value, int)]

filtered_values = filter_int_values(values)