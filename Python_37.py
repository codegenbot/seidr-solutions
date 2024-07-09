````
def sort_even(l):
    even = sorted([x for x in l if x % 2 == 0], key=lambda x: (l.index(x) // 2, x))
    odd = [x for x in l if x % 2 != 0]
    return even + odd