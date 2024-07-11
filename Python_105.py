def by_length(arr):
    sorted_arr = sorted([x for x in arr if 1 <= x <= 9])
    reversed_arr = sorted_arr[::-1]
    return [f"{'One' if x == 1 else 'Two' if x == 2 else 'Three' if x == 3 else 'Four' if x == 4 else 'Five' if x == 5 else 'Six' if x == 6 else 'Seven' if x == 7 else 'Eight' if x == 8 else 'Nine'" for x in reversed_arr]