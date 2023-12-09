def make_a_pile(n):
    result = []
    while n > 0:
        if n % 2 == 1:
            result.append(n)
        else:
            result.append(n + 1)
        n -= 1
    return result