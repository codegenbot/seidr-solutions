def sort_third(l: list):
    odd = [x for j, x in enumerate(reversed(l)) if (j+1) % 3 != 0]
    even = [x for j, x in enumerate(reversed(l)) if (j+1) % 3 == 0]
    
    result = []
    while len(odd) > 0 and len(even) > 0:
        result.append(even.pop())
        result.append(odd.pop())
    result += odd
    result += list(reversed(even))
    return result