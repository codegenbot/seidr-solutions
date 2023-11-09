
def total_match(lst1, lst2):
    '''
    Write a function that accepts two lists of strings and returns the list that has 
    total number of chars in the all strings of the list less than the other list.

    if the two lists have the same number of chars, return the first list.

    Examples
    total_match([], []) ➞ []
    total_match(['hi', 'admin'], ['hI', 'Hi']) ➞ ['hI', 'Hi']


def list_to_dict(lst1, lst2):
    '''
    Write a function that accepts two lists of strings and returns a dictionary with 
    the first list as the keys and the second list as the values.

    Examples
    list_to_dict([], []) ➞ {} 
    list_to_dict(['a', 'b', 'c'], [1, 2, 3]) ➞ {'a': 1, 'b': 2, 'c': 3}
    list_to_dict(['a', 'b'], [1, 2, 3]) ➞ {'a': 1, 'b': 2}
    list_to_dict(['a', 'b', 'c', 'd'], [1, 2]) ➞ {'a': 1, 'b': 2, 'c': None, 'd': None}
    '''



def get_dict_value(dct, key):
    '''
    Write a function that accepts a dictionary and a key as arguments and returns 
    the value of the key if it exists in the dictionary. Otherwise, the function should return None.

    Examples
    get_dict_value({'a': 1, 'b': 2, 'c': 3}, 'c') ➞ 3
    get_dict_value({'a': 1, 'b': 2, 'c': 3}, 'd') ➞ None
    '''



def get_dict_value_2(dct, key):
    '''
    Write a function that accepts a dictionary and a key as arguments and returns 
    the value of the key if it exists in the dictionary. Otherwise, the function should return None.

    Examples
    get_dict_value_2({'a': 1, 'b': 2, 'c': 3}, 'c') ➞ 3
    get_dict_value_2({'a': 1, 'b': 2, 'c': 3}, 'd') ➞ None
    '''



def get_dict_key(dct, value):
    '''
    Write a function that accepts a dictionary and a value as arguments and returns 
    the key of the value if it exists in the dictionary. Otherwise, the function should return None.

    Examples
    get_dict_key({'a': 1, 'b': 2, 'c': 3}, 3) ➞ 'c'
    get_dict_key({'a': 1, 'b': 2, 'c': 3}, 4) ➞ None
    '''



def get_dict_key_2(dct, value):
    '''
    Write a function that accepts a dictionary and a value as arguments and returns 
    the key of the value if it exists in the dictionary. Otherwise, the function should return None.

    Examples
    get_dict_key_2({'a': 1, 'b': 2, 'c': 3}, 3) ➞ 'c'
    get_dict_key_2({'a': 1, 'b': 2, 'c': 3}, 4) ➞ None
    '''



def get_dict_key_3(dct, value):
    '''
    Write a function that accepts a dictionary and a value as arguments and returns 
    the key of the value if it exists in the dictionary. Otherwise, the function should return None.

    Examples
    get_dict_key_3({'a': 1, 'b': 2, 'c': 3}, 3) ➞ 'c'
    get_dict_key_3({'a': 1, 'b': 2, 'c': 3}, 4) ➞ None
    '''



def list_to_dict_2(lst):
    '''
    Write a function that accepts a list of tuples and returns a dictionary.

    Examples
    list_to_dict_2([('a', 1), ('b', 2), ('c', 3)]) ➞ {'a': 1, 'b': 2, 'c': 3}
    list_to_dict_2([('a', 1), ('b', 2), ('c', 3), ('a', 4)]) ➞ {'a': 4, 'b': 2, 'c': 3}
    list_to_dict_2([('a', 1), ('b', 2), ('c', 3), ('a', 4), ('b', 5)]) ➞ {'a': 4, 'b': 5, 'c': 3}
    '''



def list_to_dict_3(lst):
    '''
    Write a function that accepts a list of tuples and returns a dictionary.

    Examples
    list_to_dict_3([('a', 1), ('b', 2), ('c', 3)]) ➞ {'a': 1, 'b': 2, 'c': 3}
    list_to_dict_3([('a', 1), ('b', 2), ('c', 3), ('a', 4)]) ➞ {'a': 4, 'b': 2, 'c': 3}
    list_to_dict_3([('a', 1), ('b', 2), ('c', 3), ('a', 4), ('b', 5)]) ➞ {'a': 4, 'b': 5, 'c': 3}
    '''



def list_to_dict_4(lst):
    '''
    Write a function that accepts a list of tuples and returns a dictionary.

    Examples
    list_to_dict_4([('a', 1), ('b', 2), ('c', 3)]) ➞ {'a': 1, 'b': 2, 'c': 3}
    list_to_dict_4([('a', 1), ('b', 2), ('c', 3), ('a', 4)]) ➞ {'a': 4, 'b': 2, 'c': 3}
    list_to_dict_4([('a', 1), ('b', 2), ('c', 3), ('a', 4), ('b', 5)]) ➞ {'a': 4, 'b': 5, 'c': 3}
    '''
    total_match(['hi', 'admin'], ['hi', 'hi', 'admin', 'project']) ➞ ['hi', 'admin']
    total_match(['hi', 'admin'], ['hI', 'hi', 'hi']) ➞ ['hI', 'hi', 'hi']
    total_match(['4'], ['1', '2', '3', '4', '5']) ➞ ['4']
    '''
