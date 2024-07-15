```
def bouncing_balls():
    """
    Calculates the total distance a ball travels after 'n' bounces, given its initial height and the first bounce height.
    
    Args: 
        None (inputs expected)
    
    Returns:
        The total distance traveled
    """
    h = float(input())
    b = float(input())
    i = b / h

    n = int(input())
    total_distance = 0
    for _ in range(n):
        distance_traveled = 2 * b
        total_distance += distance_traveled
        b = round(b * i)

    return total_distance