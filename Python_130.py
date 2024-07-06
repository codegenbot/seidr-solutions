
def tri(n):
    if n == 0:
        return [0]
    elif n == 1:
        return [0, 3]
    else:
        result = [0, 3]
        for i in range(2, n+1):
            if i % 2 == 0:
                result.append(result[i-1]/2)
            else:
                result.append(result[i-2] + result[i-1] + result[i])
        return result