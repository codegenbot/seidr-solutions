Here is the solution in Python:

def leaders(a):
    result = [a[-1]]
    for i in range(len(a)-2,-1,-1):
        if a[i] >= a[i+1]:
            result.append(a[i])
    return list(reversed(result))