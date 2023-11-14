
def sum_diff(lst):
    '''
    Given a list of numbers, return the sum of squares of the numbers
    in the list that are odd. Ignore numbers that are negative or not integers.
    
    sum_diff([1, 3, 2, 0]) == 1 + 9 + 0 + 0 = 10
    sum_diff([-1, -2, 0]) == 0
    sum_diff([9, -2]) == 81
    sum_diff([0]) == 0  
   
    If the input list is empty, return 0.
    '''
    sum = 0
    
    for num in lst:
        
        if num > 0 and (num % 1) == 0 and (num % 2) != 0:
            sum = num ** 2
        
    return sum
      
    
