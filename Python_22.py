def filter_integers():
    input_str = input("Enter a comma-separated list of values: ")
    values = [x.strip() for x in input_str.split(',')]
    return [value for value in values if isinstance(value, int)]