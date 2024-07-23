```
def sort_third(l: list):
    return sorted([int(str(i)[-1]) if len(str(i)) > 2 else i for i in l])