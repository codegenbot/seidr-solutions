
def total_match(lst1, lst2):
    '''
    Write a function that accepts two lists of strings and returns the list that has 
    total number of chars in the all strings of the list less than the other list.

    if the two lists have the same number of chars, return the first list.

    Examples
    total_match([], []) ➞ []
    total_match(['hi', 'admin'], ['hI', 'Hi']) ➞ ['hI', 'Hi']
    first = 0
    second = 0
    both = 0
    for index in lst1:
      first += len(index)

    for index in lst2:
      second += len(index)

    if second > first:
      return lst2
    else:
      for index in first and second:
        both += len(index)
    return lst1

def total_match2(lst1, lst2):
  return lst2 if len(''.join(lst2)) > len(''.join(lst1)) else lst1

print(total_match(['hi', 'admin'], ['hI', 'Hi']))
print(total_match2(['hi', 'admin'], ['hI', 'Hi']))
    total_match(['hi', 'admin'], ['hi', 'hi', 'admin', 'project']) ➞ ['hi', 'admin']
    total_match(['hi', 'admin'], ['hI', 'hi', 'hi']) ➞ ['hI', 'hi', 'hi']
    total_match(['4'], ['1', '2', '3', '4', '5']) ➞ ['4']
    '''
