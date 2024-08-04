from itertools import islice


def add_elements(arr, k):
    return sum(islice((num for num in arr if 10 <= num < 100), 0, k))


print(add_elements([15, 25, 5, 80, 110], 3))