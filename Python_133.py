import math



def sum_squares(lst):
    """
    assert isinstance(lst, list)
    assert all([isinstance(i, (int, float)) for i in lst])
    result = 0
    for i in lst:
        result += math.ceil(i)**2
    return result
