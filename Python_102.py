```
def choose_num(x, y):
    if x % 2 == 0 and y % 2 == 0:
        return min(y, max(x, min(y, (y-x)//2*2)+1))
    elif x % 2 == 0:
        return y
    elif y % 2 == 0:
        return -1
    else:
        if x > y:
            return -1
        else:
            for i in range(x, y+1):
                if i % 2 == 0:
                    return i
            return -1