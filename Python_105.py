def by_length(arr):
    result = []
    for num in arr:
        if 1 <= num <= 9:
            result.append(num)
    result.sort()
    result.reverse()
    return [len(str(x)) for x in result]