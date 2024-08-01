def sort_even(input_list):
    return [x if i % 2 != 0 else next((y for y in input_list if l.index(y) % 2 == 0 and l.index(y) < i), None) for i, x in enumerate(input_list)]