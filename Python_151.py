
def double_the_difference(a,b):
    '''
    Given two numbers, return the difference between the numbers.
    If the result is less than zero, double it.
    
    double_the_difference(2, 3) == 1
    double_the_difference(3, 2) == 2
    double_the_difference(7, 5) == -2
    double_the_difference(5, 7) == -2
    double_the_difference(1, 1) == 0
    double_the_difference(0, 0) == 0
    double_the_difference(-2, -2) == 0
    double_the_difference(-2, 1) == -3
    double_the_difference(1, -2) == 3
    '''
    if a - b < 0:
        return (a - b) * 2
    else:
        sum = 0
        for i in lst:
            if i % 2 == 1:
                sum += i**2
        return sum
