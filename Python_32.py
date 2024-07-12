def find_zero coefficients: 
    """
    This function calculates the root of a quadratic equation given its coefficients.
    
    Parameters:
    xs (list): A list containing the coefficients of the quadratic equation in descending order [a, b, c]. If there are more than three coefficients, the extra coefficients will be ignored.

    Returns:
    float: The positive root of the quadratic equation rounded to two decimal places. If the number of coefficients is odd, a ValueError is raised.
    """
    def find_zero(xs: list):
        n = len(xs)
        if n % 2 != 0:
            raise ValueError("xs must have even number of coefficients")
        a = xs[0]
        b = xs[1]
        c = xs[2] if n > 2 else 0
        d = xs[3] if n > 3 else 0
        
        x = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
        
        return round(x, 2)