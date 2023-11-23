import math
def poly(xs:list, x:float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list) -> list:
    zeros = []
    for i in range(len(xs) - 1):
        if xs[i+1] == 0:
            zeros.append(float('inf'))
        else:
            zeros.append(-xs[i] / xs[i + 1])
    return zeros