
def f(n):
    result = []
    for i in range(1, n+1):
        if i % 2 == 0:
            result.append(i)
        else:
            sum = 0
            for j in range(1, i+1):
                sum += j
            result.append(sum)
    return result