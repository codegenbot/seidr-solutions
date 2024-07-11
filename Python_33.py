```
def sort_third(l):
    result = []
    i = 0
    while i < len(l):
        if i % 3 == 0:
            if i // 3 * 3 + 3 <= len(l):
                result.append(sorted(l[i//3*3:i//3*3+3])[0])
            else:
                result.extend(sorted(l[i:]))
                break
        else:
            result.append(l[i])
        i += 1
    return tuple(result)