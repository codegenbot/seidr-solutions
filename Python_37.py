def sort_even(l: list):
    even = sorted([i for i in l if l.index(i) % 2 == 0])
    result = [i if j % 2 != 0 else even[j // 2] for j, i in enumerate(l)]
    return result