import math

def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list) -> float:
    if xs[1] == 0:
        return None
    return -xs[0] / xs[1]

def main():
    xs = []
    while True:
        try:
            x = input()
            if x == "":
                break
            xs.append(float(x))
        except EOFError:
            break
    
    print(find_zero(xs))

main()