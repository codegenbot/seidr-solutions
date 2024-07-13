def filter_integers(lst):
    result = [value for value in lst if isinstance(value, int)]
    print(f"Integers found: {result}")