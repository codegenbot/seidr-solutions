def make_a_pile(n):
    result = []
    i = n
    while len(result) < n:
        if i % 2 == 1:
            result.append(i)
        else:
            result.append(i+1)
        i += 2 if i % 2 == 0 else 1
    return result