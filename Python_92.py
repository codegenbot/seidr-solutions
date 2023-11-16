
def any_int(x, y, z):
    '''
    Create a function that takes 3 numbers.
    Returns true if one of the numbers is equal to the sum of the other two, and all numbers are integers.
    Returns false in any other cases.
    
    Examples
    any_int(5, 2, 7) ➞ True
    
    any_int(3, 2, 2) ➞ False

    any_int(3, -2, 1) ➞ True
    
    any_int(3.6, -2.2, 2) ➞ False
  

    int_selectors = 0
    sum_of_two = 0
    selector = [x, y, z]
    
    for item in selector:
        if item % 1 == 0:
            int_selectors += 1
    set_selector = set(selector)
    subset = set([])
    
    for i in range(len(set_selector)):
        for item in set_selector:
            subset.add(item)
            for item in set_selector:
                sum_of_two = subset.add(item) 
            if(sum in set_selector | subset):
                pass
            else:
                continue
    return False
    
    '''
