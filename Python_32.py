```
def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None
    
    a = xs[-1]
    for i in range(len(xs)-2, -1, -1):
        a = (a - xs[i]) / (-1)**(len(xs)-i-1)
    
    return round(-a, 2)