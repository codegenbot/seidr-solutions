
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
    i=0
    while i < len(lst):
        if lst[i]<0:
            if int(lst[i])-lst[i]==0:
                lst.pop(i)
            else:
                lst.pop[i]                    
        elif int(lst[i])-lst[i] != 0:
            lst.pop(i)
        else:
            i+=1
    return sum([x*x for x in lst if x%2!=0])
