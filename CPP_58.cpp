
def issame(a: set, b: set) -> bool:
    return all(x in a for x in b) and all(x in b for x in a)