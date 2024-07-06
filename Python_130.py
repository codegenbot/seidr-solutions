def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [3]
    elif n == 2:
        return [3, 2]
    else:
        result = [3, 2]
        for i in range(3, n + 1):
            if i % 2 != 0:
                last_three = result[-3:]
                result.append(sum(last_three))
            else:
                result.append(int((i / 2) + 1))
    return result