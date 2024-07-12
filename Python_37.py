def sort_even_odd(l):
    evens = sorted([i for i in l if i % 2 == 0])
    odds = sorted([i for i in l if i % 2 != 0], reverse=True)
    return evens + odds

print(sort_even_odd([3, 1, 4, 1, 5, 9, 2, 6]))