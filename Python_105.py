def by_length(arr):
    result = []
    for num in arr:
        if isinstance(num, int) and 1 <= num <= 9:
            result.append(str(num))
        elif isinstance(num, str):
            result.append(num.capitalize())
    result.sort()
    result.reverse()
    return result