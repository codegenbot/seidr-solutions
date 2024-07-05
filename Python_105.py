def by_length(arr):
    result = []
    for num in arr:
        if isinstance(num, str) and len(num) <= 9:
            result.append(str(int(num)))
        elif isinstance(num, int):
            result.append(str(num))
    result.sort()
    result.reverse()
    return result