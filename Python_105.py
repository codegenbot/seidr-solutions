```
def by_length(arr):
    result = sorted([str(i) for i in arr if 1 <= i <= 19], key=len)
    return [name_dict[int(x)] for x in result]