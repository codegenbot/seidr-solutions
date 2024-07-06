def filter_integers(input_values):
    values = [x.strip() for x in ','.join(map(str, input_values)).split(',')]
    return [int(value) for value in values if isinstance(int(value), int)]