def sort_even(l: list) -> tuple:
    even_numbers = [x for x in l if isinstance(x, int) and x % 2 == 0]
    try:
        odd_numbers = [x for x in l if isinstance(x, int) and x % 2 != 0]
    except TypeError:
        raise ValueError("List contains non-integer values")
    
    return (tuple(sorted(even_numbers)), tuple(sorted(odd_numbers)))