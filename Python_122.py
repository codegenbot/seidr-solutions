def add_elements(arr, k):
    return sum(map(lambda x: x // 100 * 100 + x % 100, arr[:k]))