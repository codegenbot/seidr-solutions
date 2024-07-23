def sort_even_odd(lst):
    even = sorted([x for x in lst if x % 2 == 0])
    odd = sorted([x for x in lst if x % 2 != 0])
    return (even, odd)

result = sort_even_odd([1, 2, 3, 4, 5, 6])
print(result)