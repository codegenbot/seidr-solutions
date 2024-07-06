
def find_zero(xs: list):
    def poly(x: float):
        return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])
    
    epsilon = 1e-6
    lower_bound = min(xs) - 1
    upper_bound = max(xs) + 1
    while upper_bound - lower_bound > epsilon:
        midpoint = (lower_bound + upper_bound) / 2
        if poly(midpoint) < 0:
            lower_bound = midpoint
        else:
            upper_bound = midpoint
    
    return midpoint