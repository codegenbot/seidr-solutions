

def sort_third(l: list):
    # >>> sort_third([1, 2, 3])
    # [1, 2, 3]

    # >>> sort_third([1, 2, 3])
    # [1, 2, 3]
    for i in range(0, len(l)):
        if i % 3 == 0:
            l[i] = sorted(l[i])
    # >>> sort_third([5, 6, 3, 4, 8, 9, 2])
    # [2, 6, 3, 4, 8, 9, 5]
