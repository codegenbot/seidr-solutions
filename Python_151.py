def double_the_difference(lst, target):
    even_numbers = [i for i in lst if isinstance(i, int) and i >= 0 and i % 2 == 0]
    min_diff = min(even_numbers) - target
    max_diff = max(even_numbers) - target
    return sum(
        i**2
        for i in even_numbers
        if abs(i - min_diff) <= target or abs(i - max_diff) <= target
    )