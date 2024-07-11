def sort_third(lst: list):
    result = []
    for i in range(0, len(lst), 3):
        temp = lst[i:i+3]
        if temp:
            result.append(sorted(temp)[0])
        else:
            result.append(None)
    return tuple(result)