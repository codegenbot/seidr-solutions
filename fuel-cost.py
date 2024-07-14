```python
def fuel_cost(vector):
    """Calculate the total fuel cost.
    
    Divide each number in the vector by 3, round down to the nearest integer, 
    then subtract 2 and sum the results.
    
    Args:
        vector (list): A list of positive integers.
    
    Returns:
        int: The total fuel cost.
    """
    return sum((i-1)//3-1 for i in vector)