def tri(n):
    if n == 0:
        return [1]
    elif n == 1:
        return [3]
    else:
        result = []
        for i in range(2, n + 1):
            if i % 2 == 0:
                result.append(1 + i // 2)
            else:
                result.append(tri(i - 1) + tri(i - 2) + tri(i + 1))
        return result