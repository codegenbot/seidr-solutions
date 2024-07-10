def sort_even(lst):
    even_numbers = sorted([x for x in lst if x % 2 == 0])
    odd_numbers = sorted([x for x in lst if x % 2 != 0])

    return [
        x if i < len(even_numbers) else y
        for i, (x, y) in enumerate(zip(even_numbers, odd_numbers))
    ]