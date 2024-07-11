def sort_even(l: list):
    even_l = sorted([i for i in l if l.index(i) % 2 == 0])
    return [i if j % 2 != 0 else even_l[j//2] for j, i in enumerate(l)]