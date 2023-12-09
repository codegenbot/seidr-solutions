
def sorted_list_sum(lst):
    unique = set()
    for w in lst:
        if len(w) % 2 == 0:
            unique.add(w)
    return sorted(unique)