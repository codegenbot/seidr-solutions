def leaders(integers):
    n = len(integers)
    result = []

    for i in range(n - 1, -1, -1):
        if all(integers[i] >= integers[j] for j in range(i + 1, n)):
            result.append(integers[i])

    return result[::-1]