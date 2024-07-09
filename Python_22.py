def filter_integers(values):
    integer_values = [value for value in values if value.isdigit()]
    return ' '.join(integer_values)

values = input("Enter values separated by space: ")
filtered_values = filter_integers(values.split())
print(filtered_values)