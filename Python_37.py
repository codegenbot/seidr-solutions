def sort_even(l: list):
    odd_numbers = [x for x in l if abs(x) % 2 != 0]
    even_numbers = sorted([abs(x) for x in l if abs(x) % 2 == 0])
    return tuple([abs(i) if i >= 0 else -abs(i) for i in even_numbers + odd_numbers])