def sort_third(l: list):
    remainder = 3 - len(l) % 3
    l += [(float('inf'), float('inf'), float('inf'))] * remainder if remainder != 3 else []
    l = [tuple([elem]) if isinstance(elem, int) else elem for elem in l]
    return [sorted(l[i:i+3], key=lambda x: x[-1] if len(x) >= 3 else float('inf')) for i in range(0, len(l), 3)]