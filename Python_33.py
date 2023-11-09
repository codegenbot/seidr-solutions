

def sort_third(l):

    for i in range(0, len(l)):
        if i % 3 == 0:
            l[i] = sorted(l[i])
    return l
