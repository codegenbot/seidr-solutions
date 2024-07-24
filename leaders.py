Here is the Python solution:

def leaders(a):
    leader = a[-1]
    for i in range(len(a)-2, -1, -1):
        if a[i] >= leader:
            leader = a[i]
    return [leader] + a[:-1][::-1]