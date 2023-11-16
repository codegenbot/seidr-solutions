
def double_the_difference(lst):
    '''
    Given a list of numbers, return the sum of squares of the numbers
    in the list that are odd. Ignore numbers that are negative or not integers.
 
    double_the_difference([1, 3, 2, 0]) == 1 + 9 + 0 + 0 = 10
    double_the_difference([-1, -2, 0]) == 0
    double_the_difference([9, -2]) == 81
    double_the_difference([0]) == 0  
  
    If the input list is empty, return 0.
    '''
    my_list = []
    for x in lst:
        if isinstance(x, int):
            if x > 0:
                if x % 2 == 1:
                    my_list.append(x**2)
    
    return sum(my_list)
    
print double_the_difference([1, 3, 2, 0])
print double_the_difference([-1, -2, 0])
print double_the_difference([9, -2])
print double_the_difference([0])
