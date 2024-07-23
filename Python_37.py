def sort_even(l):
    return [x if i % 2 != 0 else min([y for y in l if (i - 1) // 2 == (l.index(y)) // 2]) if any((i-1)//2==(j)//2 for j in l) else float('inf') for i, x in enumerate(l)]