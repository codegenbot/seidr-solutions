from itertools import islice

def add_elements(arr, k):
    return sum(islice(arr, k))