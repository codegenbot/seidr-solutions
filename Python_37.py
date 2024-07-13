```
def sort_even(l: list):
    even_list = [x for x in l if x % 2 == 0]
    even_list.sort()
    return even_list