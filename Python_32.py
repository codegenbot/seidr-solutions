Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Input coefficients must have an even number of elements")
    
    if max(abs(x) for x in xs) == 0:
        return 0
    
    from scipy.optimize import fsolve
    def func(z):
        return poly([x for _ in range(len(xs)//2)], z) - z**len(xs)//2
    
    return round(fsolve(func, max(abs(x) for x in xs))[0], 10)