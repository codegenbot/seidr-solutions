def by_length(arr):
    if not isinstance(arr, (list, tuple)):
        raise TypeError("by_length() only accepts lists or tuples")
    return list(map(lambda x: int(str(x)), sorted(arr, key=lambda x: len(str(x)))))