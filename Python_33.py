```
def sort_third(l):
    nums_divisible_by_3 = sorted([i for i in l if i % 3 == 0], reverse=True)
    other_nums = sorted([i for i in l if i % 3 != 0], reverse=True)
    return [num for _ in l for num in (nums_divisible_by_3, other_nums)[l.index(i)//3]]