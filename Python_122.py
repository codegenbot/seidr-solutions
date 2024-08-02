def add_elements(arr, k):
    if not arr or k < 1 or len(arr) < k:
        return sum(x for x in arr if 10 <= x <= 99)
    return sum(x for x in arr[:k] if 10 <= x <= 99)