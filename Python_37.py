```
def sort_even_odd(l: list):
    evens = sorted([i for i in l if i % 2 == 0])
    odds = sorted([i for i in l if i % 2 != 0], key=lambda x: -x)
    return [i if j % 2 == 0 else -i for j, i in zip(evens + odds, sorted(evens + odds))]

print(sort_even_odd([3, 1, 4, 1, 5, 9, 2, 6]))