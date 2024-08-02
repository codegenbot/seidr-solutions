def add_elements(arr, k):
    if not arr or k < 1:
        return 0
    return sum(x for x in arr[:k] if x >= 10 and x <= 99)