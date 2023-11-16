
def total_match(lst1, lst2):
    '''
    Write a function that accepts two lists of strings and returns the list that has 
    total number of chars in the all strings of the list less than the other list.

    if the two lists have the same number of chars, return the first list.

    Examples
    total_match([], []) ➞ []
    total_match(['hi', 'admin'], ['hI', 'Hi']) ➞ ['hI', 'Hi']

    char_count1 = 0
    char_count2 = 0
    for i in lst1:
        char_count1 += len(i)
    for i in lst2:
        char_count2 += len(i)

    if char_count1 == char_count2 or lst1 == []:
        return lst1
    if char_count1 < char_count2:
        return lst1
    if char_count2 < char_count1:
        return lst2

print(total_match(['hi', 'admin'], ['hI', 'Hi']))
    '''
