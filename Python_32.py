```
def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    max_coeff_idx = xs.index(max(filter(None, xs)))
    return -xs[max_coeff_idx] / xs[max_coeff_idx+1]

def find_zero():
    coefficients = input("Enter coefficients separated by spaces: ")
    xs = list(map(int, coefficients.split()))
    try:
        return find_zero(xs)
    except ValueError as e:
        print(f"Error: {str(e)}")

find_zero()