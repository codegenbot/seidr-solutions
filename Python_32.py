def find_zero(xs: list):
    """
    Given a list of numbers, returns the value that is zero when divided 
    equally between the first and last values in the list.
    
    Args:
        xs (list): A list of numbers.
    
    Returns:
        float: The value that makes the given expression zero.
    """
    return -xs[0] / xs[-1]