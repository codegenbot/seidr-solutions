def double_the_difference(list1, list2):
    if len(list1) != len(list2):
        raise ValueError("Lists must be of equal length")
    difference = sum(min(i, j) for i, j in zip(list1, list2)) - sum(max(i, j) for i, j in zip(list1, list2))
    return difference * 2