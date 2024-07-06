def make_a_pile(n):
    result = []
    i = n
    while len(result) < n:
        if i % 2 == 0:
            result.append(i)
        else:
            result.append(i+1)
        i += 1
    return result