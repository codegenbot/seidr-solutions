Here is the completed code:

def tri(n):
    if n == 0: 
        return [3]
    elif n == 1:
        return [1, 3]
    elif n == 2:
        return [1, 3, 2]
    else:
        t = [1, 3, 2]
        for _ in range(3, n + 1):
            t.append(sum(t[-1], t[-2], (t[-3] + 1) // 2))
        return t