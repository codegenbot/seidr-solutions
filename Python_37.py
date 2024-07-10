Here is the modified code:

def sort_even(l):
    even = sorted([x for x in l if x % 2 == 0])
    odd = sorted([x for x in l if x % 2 != 0])
    return [i for i in zip(even, odd) or (even, [])][0] + [i for i in l if i % 2 != 0 and i not in even]