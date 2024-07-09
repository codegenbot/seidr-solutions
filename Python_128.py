def prod_signs(arr):
    if not arr:
        return None
    return sum(abs(num) for num in arr) * (1 if all(num >= 0 for num in arr) else -1) if any(num < 0 for num in arr) else 0