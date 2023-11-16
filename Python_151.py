def count_non_int_numbers(lst):
    '''
    Given a list of numbers, return the count of positive number divisible by 
    3. Ignore numbers that are not integers.
    First item counts as non-int.
    
    count_non_int_numbers([1, 2, 3, 0]) == 2
    count_non_int_numbers([0, -3, -1]) == 0D
    count_non_int_numbers([-1, -2]) == 0
    count_non_int_numbers([0]) == 0  
    count_non_int_numbers([1.0, 2.0]) == 1
    count_non_int_numbers(["1", "2"]) == 0
    If the input list is empty, return 0.0
    '''
