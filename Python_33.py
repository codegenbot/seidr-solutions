Here is the modified code:

def sort_third(l: list):
    odd = sorted([x for j, x in enumerate(l) if (j+1) % 3 != 0], reverse=True)
    even = sorted([x for j, x in enumerate(l) if (j+1) % 3 == 0], reverse=True)
    
    result = []
    while len(odd) > 0 and len(even) > 0:
        result.append(odd.pop(0))
        result.append(even.pop(0))
    result += odd
    result += even
    return result