def by_length(arr):
    result = []
    for i in arr:
        if i >= 1 and i <= 9:
            result.append(str(i))
    result.sort()
    result.reverse()
    return ["One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"][
        result
    ]