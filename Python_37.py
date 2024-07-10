def sort_even(lst):
    even = sorted([x for x in lst if lst.index(x) % 2 == 0])
    odd = [x for x in lst if lst.index(x) % 2 != 0]
    return [even.pop(0) if i % 2 == 0 else j for i, (j, k) in enumerate(odd)]