def double_the_difference(lst, target_diff):
    even_numbers = [i for i in lst if isinstance(i, int) and i >= 0 and i % 2 == 0]
    min_even = min(even_numbers)
    max_even = max(even_numbers)

    if max_even - min_even < target_diff:
        return 0
    elif max_even - min_even > target_diff:
        return sum(i**2 for i in even_numbers if isinstance(i, int) and i % 2 == 0)
    else:
        first_half = [i for i in even_numbers if i <= min_even + (target_diff / 2)]
        second_half = [i for i in even_numbers if i >= min_even + target_diff / 2]

        return sum(i**2 for i in first_half) - sum(i**2 for i in second_half)