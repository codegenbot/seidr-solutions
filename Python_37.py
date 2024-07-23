def sort_even(input_list: list) -> tuple:
    even_and_odd = sort_even_odd(input_list)
    return (list(even_and_odd[0]), list(even_and_odd[1]))