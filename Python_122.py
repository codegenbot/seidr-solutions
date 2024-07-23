```
def add_elements(arr, k):
    return sum(i for i in arr[:k] if 10 > str(i).count('0') >= 2)