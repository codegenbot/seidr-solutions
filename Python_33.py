def sort_third(l: list):
    result = sorted([i for i in l if i % 3 != 0])
    if len(l) % 3 == 1:
        return [l[-1]] + result
    elif len(l) % 3 == 2:
        return [l[-2], l[-1]] + result
    else:
        return sorted(result + l[:len(l)//3])