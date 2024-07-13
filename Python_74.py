````
def total_match(lst1, lst2):
    """"
    This function compares two lists of strings based on their lengths.
    If the length of the first list is less than the second, it returns the first list.
    If the length of the first list is greater than the second, it returns the second list.
    If both lists have the same length, it also returns the first list.

    Parameters:
    lst1 (list): The first list of strings
    lst2 (list): The second list of strings

    Returns:
    list: The shorter list or the first list if they are equal in length
    """
    total_chars_lst1 = sum(len(s) for s in lst1)
    total_chars_lst2 = sum(len(s) for s in lst2)

    if len(lst1) < len(lst2):
        return lst1
    elif len(lst1) > len(lst2):
        return lst2
    else:
        return lst1