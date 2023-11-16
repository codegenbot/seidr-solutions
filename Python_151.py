
def double_the_difference(list1, list2):
    '''
    Given two lists of numbers, return the sum of the difference between
    the largest and smallest number in each list, doubled.
    
    double_the_difference([1, 3, 2, 0], [1, 2, 3]) == 4
    double_the_difference([0, 0], [0, 0]) == 0
    double_the_difference([1, 2, 3], [4, 5, 6]) == 12
    double_the_difference([1, 2, 3], [1, 2, 3]) == 0
    '''
    return 2 * (max(list1) - min(list1)) + 2 * (max(list2) - min(list2))
