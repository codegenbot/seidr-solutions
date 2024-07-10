def total_double_difference(lst1, lst2):
    first_half = [i**2 for i in lst1[: len(lst1) // 2] if isinstance(i, int) and i >= 0]
    second_half = [
        j**2 for j in lst2[: len(lst2) // 2] if isinstance(j, int) and j >= 0
    ]

    return abs(sum(first_half) - sum(second_half))