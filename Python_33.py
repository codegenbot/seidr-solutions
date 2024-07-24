```
def sort_third(lst):
    return tuple(sorted((x for x in lst), key=lambda x: str(x)[:3]))