def sort_third(l: list):
    odd = sorted([x for i, x in enumerate(l) if i % 2 != 0])
    even = [x for i, x in enumerate(l) if i % 2 == 0]
    return [x if i % 2 != 0 else odd[0] if j < len(odd) else even[j//2] 
            for i, x in enumerate(l) for j in range(len(l))]