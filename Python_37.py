```
def sort_even(l: list):
    even_nums = [x for x in l if x % 2 == 0]
    even_num = min(even_nums) if even_nums else None
    return [even_num] * len(l) if even_num is not None else l