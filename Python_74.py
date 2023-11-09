
def total_match(lst1, lst2):
    '''
    Write a function that accepts two lists of strings and returns the list that has 
    total number of chars in the all strings of the list less than the other list.

    if the two lists have the same number of chars, return the first list.

    Examples
    total_match([], []) ➞ []
    total_match(['hi', 'admin'], ['hI', 'Hi']) ➞ ['hI', 'Hi']
    total_first = 0
    total_second = 0

    for i in lst1:
        total_first += len(i)
    for j in lst2:
        total_second += len(j)

    if total_first > total_second:
        return lst2
    elif total_second > total_first:
        return lst1
    else:
        return lst1

print(total_match(['hi', 'admin'], ['hI', 'hi', 'hi']))
    total_match(['hi', 'admin'], ['hi', 'hi', 'admin', 'project']) ➞ ['hi', 'admin']
    total_match(['hi', 'admin'], ['hI', 'hi', 'hi']) ➞ ['hI', 'hi', 'hi']
    total_match(['4'], ['1', '2', '3', '4', '5']) ➞ ['4']
    '''
