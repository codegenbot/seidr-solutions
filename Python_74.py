
def total_match(lst1, lst2):
    '''
    Write a function that accepts two lists of strings and returns the list that has 
    total number of chars in the all strings of the list less than the other list.

    if the two lists have the same number of chars, return the first list.

    Examples
    '''
    char_count1 = 0
    char_count2 = 0
    for i in lst1:
        char_count1 += len(i)
    for i in lst2:
        char_count2 += len(i)

    if char_count1 == char_count2:
        return lst1
    if char_count1 < char_count2:
        return lst1
    if char_count2 < char_count1:
        return lst2
    total_match([], []) ➞ []
    total_match(['hi', 'admin'], ['hI', 'Hi']) ➞ ['hI', 'Hi']

print(total_match(['hi', 'admin'], ['hI', 'Hi']))
    total_match(['hi', 'admin'], ['hi', 'hi', 'admin', 'project']) ➞ ['hi', 'admin']
    total_match(['hi', 'admin'], ['hI', 'hi', 'hi']) ➞ ['hI', 'hi', 'hi']
    total_match(['4'], ['1', '2', '3', '4', '5']) ➞ ['4']
