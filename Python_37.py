def sort_even(l: list):
    evens = [x for x in l if x % 2 == 0]
    sorted_evans = sorted(evens)
    return sorted_evans + [x for x in l if x % 2 != 0]