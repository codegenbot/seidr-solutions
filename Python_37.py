def sort_even(l: list) -> tuple:
    even_numbers = sorted([x for x in l if x % 2 == 0])
    odd_numbers = sorted([x for x in l if x % 2 != 0])
    return (tuple(even_numbers), tuple(odd_numbers))