```
def filter_integers(input_list=None):
    if input_list is None:
        input_str = input("Enter a comma-separated list of values: ")
        values = [x.strip() for x in input_str.split(',')]
    else:
        values = [x.strip() for x in str(input_list).split(',')]
    return [int(value) for value in values if isinstance(int(value), int)]