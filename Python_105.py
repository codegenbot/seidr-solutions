def by_length(arr):
    return [str(x) for x in sorted(map(str, arr), key=len)]