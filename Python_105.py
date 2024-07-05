def by_length(arr):
    result = []
    for num in arr:
        if 1 <= num <= 9:
            result.append(str(num))
    result.sort()
    result.reverse()
    return ["One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"][
        result
    ]