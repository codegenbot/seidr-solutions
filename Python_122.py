```
def add_elements(arr, k):
    return sum(i for i in arr[:k] if 10 > str(abs(i)).ljust(3)[:2].isdigit())