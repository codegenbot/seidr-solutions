def find_zero(xs: list):
    """
    Calculate the zero value of a polynomial given its coefficients.

    Given a list of coefficients for a polynomial of the form 
    p(x) = a_0 + a_1*x + a_2*x^2 + ... + a_n*x^n, where a_0 is the constant term, 
    calculate and return the zero value x such that p(x) = 0. If no real root exists, 
    return None.

    Parameters:
    xs (list): A list of coefficients for the polynomial in ascending order of powers.

    Returns:
    float or None: The zero value of the polynomial if it has a real root; otherwise, None.
    """
    return -xs[0] / xs[-1]