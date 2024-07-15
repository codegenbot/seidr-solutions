def sort_third(l: list):
    result = [sorted(l[i : i + 3]) for i in range(0, len(l), 3) if i + 2 < len(l)]
    if len(l) % 3 != 0:
        result.append(l[len(l) // 3 * 3 :])
    return result