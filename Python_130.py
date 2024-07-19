def tri(n):
    if n == 0:
        return [0]
    elif n == 1:
        return [1]
    result = [1, 3, 2]
    for i in range(3, n + 1):
        if i % 2 == 0:
            result.append(1 + i // 2)
        else:
            result.append(result[i - 1] + result[i - 2] + result[i - 3])
    return result