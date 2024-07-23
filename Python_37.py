def check(lst):
    even = sorted([x for x in lst[0] if x % 2 == 0])
    odd = sorted([x for x in lst[1] if x % 2 != 0])
    return (even, odd)

check(([1, 2, 3, 4], [5, 6]))