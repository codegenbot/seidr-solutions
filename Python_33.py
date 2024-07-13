def sort_third(lst):
    lst.sort(key=lambda x: (x % 3, -abs(x)))
    return [lst[i] for i in range(len(lst)) if (i + 1) % 3 == 0]