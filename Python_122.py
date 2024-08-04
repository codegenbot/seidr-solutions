from itertools import islice

def add_elements(arr, k=0):
    return sum(islice((num for num in arr if 10 <= num < 100), k))