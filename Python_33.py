def sort_third(l):
    result = []
    for i in range(0, len(l), 3):
        chunk = l[i:i+3]
        result.append(sorted(chunk))
    return [item for sublist in result for item in sublist]