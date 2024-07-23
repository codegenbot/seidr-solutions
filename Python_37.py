def sort_even(l: list):
    even_numbers = [x for x in l if x % 2 == 0]
    sorted_even_numbers = sorted(even_numbers)[::-1]
    
    return [x if x % 2 != 0 else sorted_even_numbers.pop(0) for x in l]