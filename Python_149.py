def sorted_list_sum(lst):
    strings = [s for s in lst if isinstance(s, str)]
    digits = [int(c) for s in strings for c in s if c.isdigit()]
    return sorted([str(digit) for digit in digits])