def sort_even(l: list):
    even_numbers = [x for x in l if x % 2 == 0]
    even_numbers.sort()
    return [even_numbers[i//2] if i % 2 != 0 else x for i, x in enumerate(l)]