
def total_match(lst1, lst2):
    '''
    Write a function that accepts two lists of strings and returns the list that has 
    total number of chars in the all strings of the list less than the other list.

    if the two lists have the same number of chars, return the first list.

    Examples
    total number of chars in the all strings of the list less than the other list.

    if the two lists have the same number of chars, return the first list.

    Examples
    total_match([], []) 
    total_match(['hi', 'admin'], ['hI', 'Hi']) 
    total_1 = 0
    total_2 = 0
    for word in lst1:
        total_1 += len(word)
    for word in lst2:
        total_2 += len(word)
    if total_1 == total_2:
        return lst1
    elif total_1 < total_2:
        return lst1
    else:
        return lst2


print(total_match(['4'], ['1', '2', '3', '4', '5']))
    total_match(['hi', 'admin'], ['hi', 'hi', 'admin', 'project']) ➞ ['hi', 'admin']
    total_match(['hi', 'admin'], ['hI', 'hi', 'hi']) ➞ ['hI', 'hi', 'hi']
    total_match(['4'], ['1', '2', '3', '4', '5']) ➞ ['4']
    '''
