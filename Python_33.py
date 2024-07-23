```
def sort_third(l: list):
    return sorted((int(str(i)[-1]), i) for i in l)