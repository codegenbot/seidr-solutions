

def sum_to_n(n: int):
    """sum_to_n is a function that sums numbers from 1 to n.
    >>> sum_to_n(30) == 465    
    True    
    >>> sum_to_n(5) == 15
    True
    >>> sum_to_n(10) == 55
    True
    >>> sum_to_n(1) == 1
    True
    sum = 0
    for i in range(1, n + 1):
        sum += i
    return sum
    """
