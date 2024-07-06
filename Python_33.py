def sort_third(l: list):
    thirds = [x for x in l if x % 3 == 0]
    thirds.sort()
    
    result = []
    i, j = 0, 0
    for _ in range(len(l)):
        if j < len(thirds):
            result.append((i, thirds[j]))
            j += 1
        else:
            result.append(i)
            i += 1
    
    return [x[1] for x in sorted(result)]