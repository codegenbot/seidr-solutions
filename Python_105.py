def by_length(arr):
    result = {}
    for num in arr:
        if 1 <= num <= 9:
            result[num] = str(num)
    return [result[key] for key in sorted(result, reverse=True)]