def sort_even(input_list):
    return [x if i % 2 != 0 else next((y for y in input_list if input_list.index(y) % 2 == 0 and input_list.index(y) < i), None) for i, x in enumerate(input_list)]