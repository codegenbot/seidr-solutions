def unique(l: list) -> list:
    return list(set([item for item in l if l.count(item) == 1]))