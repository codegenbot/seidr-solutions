def smallest_change(arr):
    n = len(arr)
    arr = [str(i) for i in arr]
    rev_str = ''.join(arr)[::-1]
    return sum(el1 != el2 for el1, el2 in zip(arr, rev_str))