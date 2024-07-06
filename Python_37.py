```
def sort_even(l: list) -> tuple:
    even_numbers = sorted([x for x in l if isinstance(x, int) and x % 2 == 0])
    odd_numbers = sorted([x for x in l if isinstance(x, int) and x % 2 != 0])

    non_integers = [x for x in l if not isinstance(x, int)]
    
    result = even_numbers + odd_numbers + non_integers
    
    return tuple(result)