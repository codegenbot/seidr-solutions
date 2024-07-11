```
def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    return [x if i % 2 != 0 else evens[j//2] 
            for j, (i, x) in enumerate(sorted((i, x) for i, x in enumerate(l)))]