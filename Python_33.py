```Python
def sort_third(l: list):
    odd = [x for j, x in enumerate(l) if (j+1) % 3 != 0]
    even = [x for j, x in enumerate(l) if (j+1) % 3 == 0]
    
    result = []
    while len(odd) > 0 and len(even) > 0:
        odd.sort(reverse=True)
        even.sort(reverse=True)
        result.append(odd.pop(0))
        result.append(even.pop(0))
    result += odd
    result += even
    return result