def by_length(arr):
    if not isinstance(arr, (list, tuple)):
        raise TypeError("by_length() only accepts lists or tuples")
    return [str(x) for x in sorted([str(i) for i in arr], key=len)]