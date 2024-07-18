def sort_even(l: list):
    even_values = sorted([x for x in l if x % 2 == 0])
    result = [x if i % 2 != 0 else even_values.pop(0) for i, x in enumerate(l)]
    return result