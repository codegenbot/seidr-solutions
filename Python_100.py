def make_a_pile(n):
    result = []
    for i in range(n):
        if i % 2 == 0:
            result.append(i*2 + 1)
        else:
            result.append(i*2 + 2)
    return result