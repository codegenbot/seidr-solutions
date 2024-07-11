def by_length(arr):
    sorted_arr = sorted([i for i in arr if 1 <= i <= 9])
    reversed_arr = sorted_arr[::-1]
    return [f"{'One' if n == 1 else 'Two' if n == 2 else 'Three' if n == 3 else 'Four' if n == 4 else 'Five' if n == 5 else 'Six' if n == 6 else 'Seven' if n == 7 else 'Eight' if n == 8 else 'Nine'" for n in reversed_arr]