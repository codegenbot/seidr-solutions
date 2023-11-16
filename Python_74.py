
def total_match(lst1, lst2):
    '''
    Write a function that accepts two lists of strings and returns the list that has 
    total number of chars in the all strings of the list less than the other list.

    if the two lists have the same number of chars, return the first list.

    Examples
    total_match([], []) ➞ []
    total_match(['hi', 'admin'], ['hI', 'Hi']) ➞ ['hI', 'Hi']
    # sum of the length of every string in lst1
    a = 0
    for s in lst1:
        a += len(s)

    # sum of the length of every string in lst2
    b = 0
    for s in lst2:
        b += len(s)

    # the final answer
    if a <= b:
        return lst1
    else:
        return lst2


print(total_match(['hi', 'admin'], [
      'hI', 'Hi'])) 
    total_match(['hi', 'admin'], ['hi', 'hi', 'admin', 'project']) ➞ ['hi', 'admin']
    total_match(['hi', 'admin'], ['hI', 'hi', 'hi']) ➞ ['hI', 'hi', 'hi']
    total_match(['4'], ['1', '2', '3', '4', '5']) ➞ ['4']
    '''
