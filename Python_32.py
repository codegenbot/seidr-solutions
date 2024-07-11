```
def find_zero(xs):
    if type(xs) != list or len(xs) < 2:
        return 
    if xs[0] != 0:
        return 
    for x in xs[1:]:
        if x != 0:
            return 
    if len(set(xs[1:])) > 1:
        return 
    return -xs[-1] / (2 * sum(xs[1:]))