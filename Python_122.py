```
def add_elements(arr, k):
    return sum(i for i in arr[:k] if len(str(abs(i))) <= 2)