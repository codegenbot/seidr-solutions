
def double_the_difference(lst):
    '''
    Given a list of numbers, return the sum of the squares of the numbers
    in the list that are odd. Ignore numbers that are negative or that are not integers.
    
    double_the_difference([1, 3, 2, 0]) == 1 + 9 + 0 + 0 = 10
    double_the_difference([-1, -2, 0]) == 0
    double_the_difference([9, -2]) == 81
    double_the_difference([0]) == 0  
   
    If the input list is empty, return 0.
    '''
    
    lst = [int(x) for x in lst if x.isdigit()]
    res = 0
    for i in lst:
        if i % 2 == 1:
            res += i ** 2
    return res
    
    
def check(fn):
    for lst in [[1, 3, 2, 0], [-1, -2, 0], [9, -2], [0]]:
        odd_sum = sum(x**2 for x in lst if x > 0 and x % 2 == 1)
        assert fn(lst) == odd_sum, "fn({}) != {}".format(lst, odd_sum)
    print("Success!")
    
check(double_the_difference)
