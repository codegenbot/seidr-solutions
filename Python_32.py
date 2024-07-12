```
def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[-1]
    b = -xs[1] / a
    return round(-b / (2 * a), 2)

if __name__ == "__main__":
    try:
        xs = list(map(float, input("Enter the coefficients separated by space: ").split()))
        print(find_zero(xs))
    except ValueError as e:
        print(e)