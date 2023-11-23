import math
from typing import List

def poly(xs: List[float], x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: List[float]) -> List[float]:
    zeros = []
    for i in range(len(xs) - 1):
        if xs[i+1] != 0:
            zeros.append(-xs[i] / xs[i + 1])
    return zeros