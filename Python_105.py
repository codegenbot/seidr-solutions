def by_length(arr):
    return [str(x) for x in sorted(arr, key=lambda x: len(str(x)))]