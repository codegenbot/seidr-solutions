def make_a_pile(n):
    result = []
    i = n
    while len(result) < n:
        if i % 2 == 0:
            result.append(i)
            i += 1
        else:
            result.append(i)
            i += 2
    return result