
def sum_of_squares_of_odd(lst):
    '''
    Given a list of numbers, return the sum of squares of the numbers
    in the list that are odd. Ignore numbers that are negative or not integers.
    
    sum_of_squares_of_odd([1, 3, 2, 0]) == 1 + 9 + 0 + 0 = 10
    sum_of_squares_of_odd([-1, -2, 0]) == 0
    sum_of_squares_of_odd([9, -2]) == 81
    sum_of_squares_of_odd([0]) == 0  
   
    If the input list is empty, return 0.
    '''
    if lst == []:
        return 0
    else:
        sum = 0
        for i in lst:
            if i % 2 == 1:
                sum += i**2
        return sum

def double_the_difference(nums):
    '''
    Given a list of numbers, return twice the difference between the largest
    number and the smallest number, except ignore any even numbers in the
    calculation of the difference.
    
    double_the_difference([3, 4, 5, 6, 7, 8, 9]) == 2 * (9 - 3) = 12
    double_the_difference([3, 4, 5, 6, 7, 8, 9, 10]) == 2 * (9 - 3) = 12
    double_the_difference([3, 4, 5, 6, 7, 8, 9, 10, 11]) == 2 * (11 - 3) = 16
    double_the_difference([3, 4, 5, 6, 7, 8, 9, 10, 11, 12]) == 2 * (11 - 3) = 16
    
    If the input list is empty, return 0.
    '''
    if nums == []:
        return 0
    else:
        min = nums[0]
        max = nums[0]
        for i in nums:
            if i < min:
                min = i
            if i > max:
                max = i
        return 2 * (max - min)
