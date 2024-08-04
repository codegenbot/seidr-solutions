from itertools import islice


def add_elements(arr, k):
    return sum(islice((num for num in arr if 10 <= num < 100), k))