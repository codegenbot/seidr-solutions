```
def sort_third(lst: list) -> list:
    return [i for _, i in sorted((int(str(i)[1]), i) for i in lst)]