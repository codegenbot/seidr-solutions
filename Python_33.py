def sort_third(lst):
    return sorted([i for i in range(len(lst)) if (i+1) % 3 == 0])[-1]