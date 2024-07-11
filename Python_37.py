def sort_even(l):
    even_numbers = [x for x in l if x % 2 == 0]
    odd_numbers = sorted([x for x in l if x % 2 != 0])

    even_numbers.sort()
    return even_numbers + odd_numbers