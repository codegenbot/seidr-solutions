def smallest_change(arr):
    arr = [str(x) for x in arr]
    rev_arr = "".join(reversed(arr))
    return sum(c1 != c2 for c1, c2 in zip(arr, rev_arr)) // 2