```
def sort_third(l):
    return sorted(l, key=lambda x: (x % 3, x))

print(sort_third([1, 2, 4, 3]))