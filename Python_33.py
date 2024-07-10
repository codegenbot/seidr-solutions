def sort_third(l: list):
    thirds = [i for i in l if i % 3 == 0]
    others = sorted([i for i in l if i % 3 != 0])
    result = others
    if len(thirds) > 0:
        result += thirds
    return result