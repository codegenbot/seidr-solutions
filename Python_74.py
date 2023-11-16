
def total_match(lst1, lst2):
    '''
    Write a function that accepts two lists of strings and returns the list that has 
    total number of chars in the all strings of the list less than the other list.

    if the two lists have the same number of chars, return the first list.

    Examples
    total_match([], []) ➞ 0
    total_match(['hi', 'admin'], ['hI', 'Hi']) ➞ 2
    total_match(['hi', 'admin'], ['hi', 'hi', 'admin', 'project']) ➞ 4
    total_match(['hi', 'admin'], ['hI', 'hi', 'hi']) ➞ 3
    total_match(['4'], ['1', '2', '3', '4', '5']) ➞ 1
    '''
