def add_elements(arr, k):
    return sum(int(i) for i in str(abs(sum(arr[:k]))) if len(str(i)) <= 2)