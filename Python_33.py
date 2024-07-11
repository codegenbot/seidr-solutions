def sort_third(l: list):
    odd = [x for j, x in enumerate(reversed(l)) if (j+1) % 3 != 0]
    even = [x for j, x in enumerate(reversed(l)) if (j+1) % 3 == 0]
    
    result = []
    while odd and even:
        result.append(even.pop())
        result.append(odd.pop())
    result += odd
    result += list(reversed(even))
    return result