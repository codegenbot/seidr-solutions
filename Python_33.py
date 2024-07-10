def sort_third(l: list):
    result = []
    for i in l:
        if i % 3 == 0:
            if len(result) >= 2:
                result.append(i // 3)
            else:
                result.extend([i // 3] * (2 - len(result)))
    return result