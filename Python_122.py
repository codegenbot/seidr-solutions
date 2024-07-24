def add_elements(arr, k):
    result = 0
    for x in arr[:k]:
        if 10 > len(str(abs(x))) or len(str(abs(x))) == 2:
            result += x
    return result