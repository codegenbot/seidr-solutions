def sort_even(l: list):
    return [l[i] if i % 2 else sorted([x for x in l if l.index(x) % 2 == 0])[-1]] + [
        i + 1 for i in range(len(l))
    ].pop(0)