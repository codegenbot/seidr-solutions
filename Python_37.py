````
def sort_even(l):
    even_list = sorted([x for x in l if x % 2 == 0], key=lambda x: (l.index(x) // 2, x))
    odd_list = [x for x in l if x % 2 != 0]
    return even_list + odd_list