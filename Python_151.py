
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

    #step 1: 
    #create a list of odd numbers and squared odd numbers
    #step 2:
    #create a list of even and squared even numbers

    list_of_odd_squared = []
    list_of_even_squared = []

    for num in range(len(lst)-1, -1, -1):
        if lst[num] > 0 and lst[num] % 2 != 0:
            squared_odd = lst[num] ** 2
            list_of_odd_squared.append(squared_odd)
        
        elif lst[num] > 0 and lst[num] % 2 == 0:
            squared_even = lst[num] ** 2
            list_of_even_squared.append(squared_even)


    return sum(list_of_odd_squared) * 3 - sum(list_of_even_squared)
