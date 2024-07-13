def sorted_list_sum(lst):
    strings = [s for s in lst if isinstance(s, str)]
    numbers = [int(c) for s in strings for c in s if c.isdigit()]
    return sorted(list(set(strings))) + sorted(
        set(str(x) for x in set(map(int, map(str, str(numbers)))))
    )