
def total_match(lst1, lst2): #принимает два списка строк
    '''
    Написать функцию, которая принимает два списка строк и возвращает список, 
    который имеет общее количество символов во всех строках меньше, чем другой список.

    Если в двух списках одинаковое количество символов, вернуть первый список.

    Examples
    total_match([], []) ➞ []
    total_match(['hi', 'admin'], ['hI', 'Hi']) ➞ ['hI', 'Hi'] 
    '''
    total_first = 0
    total_second = 0

    for i in lst1: #проходимся по элементам первого списка
        total_first += len(i)
    for j in lst2: #проходимся по элементам второго списка
        total_second += len(j)

    if total_first > total_second:
        return lst2
    elif total_second > total_first:
        return lst1
    else:
        return lst1

print(total_match(['hi', 'admin'], ['hI', 'Hi']))
print(total_match(['hi', 'admin'], ['hi', 'hi', 'admin', 'project']))
print(total_match(['hi', 'admin'], ['hI', 'hi', 'hi']))
print(total_match(['4'], ['1', '2', '3', '4', '5']))
