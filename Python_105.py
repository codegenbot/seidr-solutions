def by_length(arr):
    sorted_arr = sorted([num for num in arr if 1 <= num <= 9])
    reversed_arr = sorted_arr[::-1]
    return [f"{'One' if i < 2 else 'Two' if i == 2 else 'Three' if i == 3 else 'Four' if i == 4 else 'Five' if i == 5 else 'Six' if i == 6 else 'Seven' if i == 7 else 'Eight' if i == 8 else 'Nine'" for i in range(1, len(reversed_arr)+1) if reversed_arr[i-1] < 10]