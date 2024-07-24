```
def smallest_change(arr):
    half_len = len(arr) // 2
    first_half = arr[:half_len]
    second_half = arr[half_len:]
    diff_count = 0
    for i in range(half_len):
        if first_half[i] != str(int(str(second_half)[::-1]))[i]:
            diff_count += 1
    return diff_count