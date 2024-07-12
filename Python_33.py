```Python
def sort_third(lst):
    return sorted([x for _, x in sorted(((j//3, y) for j, y in enumerate(lst)), key=lambda t: (t[0]%3, t[1]))])