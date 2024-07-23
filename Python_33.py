```
def sort_third(lst: list) -> list:
    return sorted(int(str(i)[1:]) for i in lst if len(str(i)) > 1)