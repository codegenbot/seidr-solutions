def sort_even(l: list):
    evens = sorted([i for i in l if i % 2 == 0])
    non_evens = [i for i in l if i % 2 != 0]
    return [j if j % 2 != 0 else k for j, k in zip(non_evens, evens)]