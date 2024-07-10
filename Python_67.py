def fruit_distribution(s, n):
    """
    This function calculates the remaining number of fruits that can be distributed after some have been given away.
    
    Parameters:
    s (str): A string containing information about apples and oranges distribution.
    n (int): The total number of fruits available.

    Returns:
    int: The number of remaining fruits that can be distributed.
    """
    s = " ".join(s).replace("apples and", "apples ").replace("oranges", " oranges").split()
    apples = int(s[s.index("apples") + 1 :].replace("and", "").replace("apples", ""))
    oranges = int(s[s.index("oranges") + 7 :].replace("and", "").replace("oranges", ""))
    return n - apples - oranges