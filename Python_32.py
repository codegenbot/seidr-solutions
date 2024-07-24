res = []
    for i in range(len(xs) - 1):
        if xs[i] * xs[i+1] < 0:
            res.append(i)
    
    return round(-xs[res[0]] / xs[res[0] + 1], 9)