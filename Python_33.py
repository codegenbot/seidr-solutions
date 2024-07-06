```
def sort_third(l: list):
    return sorted((i % 3 and 'multiple of 3' or 'not a multiple of 3') for i in l)