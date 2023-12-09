def any_int(x, y, z):
    if isclose(x, y + z, abs_tol=1e-8) or isclose(y, x + z, abs_tol=1e-8) or isclose(z, x + y, abs_tol=1e-8):
        return True
    else:
        return False