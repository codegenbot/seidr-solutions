```
def smallest_change(arr):
    arr = list(map(str, arr))
    s = "".join(arr)
    rev_s = s[::-1]
    return sum(el1 != el2 for el1, el2 in zip(s, rev_s))