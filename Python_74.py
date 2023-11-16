
def total_match(lst1, lst2):
    '''
    Write a function that accepts two lists of strings and returns the list that has 
    total number of chars in the all strings of the list less than the other list.

    if the two lists have the same number of chars, return the first list.

    Examples
    total_match([], []) ➞ []
    '''
    if len(lst1) == 0:
        return []
    elif len(lst2) == 0:
        return []
    total_1 = sum([len(word) for word in lst1])
    total_2 = sum([len(word) for word in lst2])
    return lst1 if total_1 <= total_2 else lst2


print(total_match(['4'], ['1', '2', '3', '4', '5']))
    total_match(['hi', 'admin'], ['hi', 'hi', 'admin', 'project']) ➞ ['hi', 'admin']
    total_match(['hi', 'admin'], ['hI', 'hi', 'hi']) ➞ ['hI', 'hi', 'hi']
    total_match(['4'], ['1', '2', '3', '4', '5']) ➞ ['4']
    '''
