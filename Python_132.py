
def is_nested(string):
    '''
    Create a function that takes a string as input which contains only square brackets.
    The function should return True if and only if there is a valid subsequence of brackets 
    where at least one bracket in the subsequence is nested.

    is_nested('[[]]') ➞ True
    is_nested('[]]]]]]][[[[[]') ➞ False
    is_nested('[][]') ➞ False
    is_nested('[]') ➞ False
    is_nested('[[][]]') ➞ True

    counter = 0
    for x in string:
        if x == '[':
            counter += 1
        else:
            counter -= 1
        if counter < 0:
            return False
    return counter == 0


# print(is_nested('[[]]'))
# print(is_nested('[]]]]]]][[[[[]'))
# print(is_nested('[][]'))
# print(is_nested('[]'))
# print(is_nested('[[][]]'))
# print(is_nested('[[]][['))


def sum_of_cubes(nums):
    '''
    Create a function that takes a list of numbers and returns the sum of its cubes.

    sum_of_cubes([1, 5, 9]) ➞ 855
    # Since 1^3 + 5^3 + 9^3 = 1 + 125 + 729 = 855
    sum_of_cubes([3, 4, 5]) ➞ 216
    sum_of_cubes([2]) ➞ 8
    sum_of_cubes([]) ➞ 0
    '''
    return sum(x**3 for x in nums)


# print(sum_of_cubes([1, 5, 9]))
# print(sum_of_cubes([3, 4, 5]))
# print(sum_of_cubes([2]))
# print(sum_of_cubes([]))


def find_odd_nums(num):
    '''
    Create a function that takes a number as an argument and returns a list of all its factors (except 1 and the number itself). 
    If the number is prime return the string '(integer) is prime'.

    find_odd_nums(12) ➞ [2, 3, 4, 6]
    find_odd_nums(4) ➞ '4 is prime'
    find_odd_nums(9) ➞ [3]
    find_odd_nums(13) ➞ '13 is prime'
    '''
    num_list = []
    if num == 1:
        return num_list
    elif num == 2:
        return num_list
    elif num == 3:
        return num_list
    elif num == 4:
        return num_list
    else:
        for i in range(2, num):
            if (num % i) == 0:
                num_list.append(i)
        return num_list


# print(find_odd_nums(12))
# print(find_odd_nums(4))
# print(find_odd_nums(9))
# print(find_odd_nums(13))


def find_odd_nums(num):
    '''
    Create a function that takes a number as an argument and returns a list of all its factors (except 1 and the number itself). 
    If the number is prime return the string '(integer) is prime'.

    find_odd_nums(12) ➞ [2, 3, 4, 6]
    find_odd_nums(4) ➞ '4 is prime'
    find_odd_nums(9) ➞ [3]
    find_odd_nums(13) ➞ '13 is prime'
    '''

    num_list = []
    if num == 1:
        return num_list
    elif num == 2:
        return num_list
    elif num == 3:
        return num_list
    elif num == 4:
        return num_list
    else:
        for i in range(2, num):
            if (num % i) == 0:
                num_list.append(i)
        if len(num_list) == 0:
            return f'{num} is prime'
        else:
            return num_list


# print(find_odd_nums(12))
# print(find_odd_nums(4))
# print(find_odd_nums(9))
# print(find_odd_nums(13))


def find_odd_nums(num):
    '''
    Create a function that takes a number as an argument and returns a list of all its factors (except 1 and the number itself). 
    If the number is prime return the string '(integer) is prime'.

    find_odd_nums(12) ➞ [2, 3, 4, 6]
    find_odd_nums(4) ➞ '4 is prime'
    find_odd_nums(9) ➞ [3]
    find_odd_nums(13) ➞ '13 is prime'
    '''

    num_list = []
    if num == 1:
        return num_list
    elif num == 2:
        return num_list
    elif num == 3:
        return num_list
    elif num == 4:
        return num_list
    else:
        for i in range(2, num):
            if (num % i) == 0:
                num_list.append(i)
        if len(num_list) == 0:
            return f'{num} is prime'
        else:
            return num_list


# print(find_odd_nums(12))
# print(find_odd_nums(4))
# print(find_odd_nums(9))
# print(find_odd_nums(13))
    is_nested('[[]][[') ➞ True
    '''
