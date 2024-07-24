def by_length(arr):
    result = sorted([str(i) for i in arr if 1 <= i <= 9], key=len)
    return [name_dict[int(i)] for i in result]