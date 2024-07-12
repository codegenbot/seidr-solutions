def by_length(arr):
    sorted_arr = sorted([num for num in arr if 1 <= num <= 9])
    reversed_arr = sorted_arr[::-1]
    return [str(i) + "o" if i < 5 else str(i) + "n" for i in reversed_arr]