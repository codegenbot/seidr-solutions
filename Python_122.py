def add_elements(arr, k):
    return sum([x for x in arr[:k+1] if (x >= 10 and x <= 99) or (x >= 200 and x <= 298)])