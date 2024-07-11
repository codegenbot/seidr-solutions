def sort_third(l: list):
    result = []
    for i in range(0, len(l), 3):
        temp = l[i:i+3]
        if not temp:
            break
        result.append(min(temp)) if temp else None
    result += l[3 * (len(result) // 3):]
    return tuple(result)