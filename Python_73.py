def smallest_change(arr):
    n = len(arr)
    arr = ' '.join(map(str, arr))
    s = arr + ' ' + arr[::-1]
    return s.count(' ') - 2