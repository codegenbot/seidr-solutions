def count_up_to(n):
    result = []
    for i in range(2, n + 1):
        result.append(str(i))
    return list(set(result))