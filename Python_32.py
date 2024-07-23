def find_zero(xs):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    x1, x2, *_, xm, xn = xs
    y1, y2, *_, ym, yn = [y**2 for y in xs]
    A = (ym + yn) - (x1*y1 + x2*y2)
    B = ((x1*y1)**2 + 2*x1*y1*ym + (x2*y2)**2 + 2*x2*y2*ym) - ((xm*yn)**2 + 2*xm*yn*yn)
    C = (-((x1*y1)**2 + 2*x1*y1*ym + (x2*y2)**2 + 2*x2*y2*ym) + (xm*yn)**2 + 2*xm*yn*yn)
    D = -B / (4*A)
    return round(D, 2)