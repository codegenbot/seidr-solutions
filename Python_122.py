```
def add_elements(arr, k):
    return sum(i for i in arr[:k] if str(abs(i)).isdigit() and len(str(abs(i))) <= 2)