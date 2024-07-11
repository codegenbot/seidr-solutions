```
def sort_third(l: list):
    result = []
    for i in range(0, len(l), 3):
        if i+3 > len(l):  
            result.append(sorted([x for x in l[i:]])[0]) if l[i:] else None
        elif i % 3 == 0:  
            if i+3 <= len(l):  
                result.append(sorted([x for x in l[i:i+3]])[i%3])
            else:
                result.append(None)
        else:  
            result.extend(sorted([x for x in l[i:i+3]]))
    return result