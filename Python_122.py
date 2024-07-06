def add_elements(arr, k):
    return sum(map(lambda x: x // 10 ** (len(str(x)) - 2), arr[:k]))