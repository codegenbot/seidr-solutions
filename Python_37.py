def check(lst):
    even = sorted([x for x in lst if x % 2 == 0])
    odd = sorted([x for x in lst if x % 2 != 0])
    return (even, odd)