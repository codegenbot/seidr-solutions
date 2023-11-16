def check(double_the_difference):
    test_cases = [
        ([1, 3, 2, 0], 4),
        ([-1, -2, 0], 3),
        ([9, -2], 9),
        ([0], 0),
        ([], 0),
        ([1], 0),
    ]

    for lst, odd_sum in test_cases:
        double_the_difference(lst) == odd_sum


def double_the_difference(lst):
    '''
    Given a list of numbers, return the sum of the differences between
    the largest and smallest numbers in the list.
    
    double_the_difference([1, 3, 2, 0]) == 2 + 2 = 4
    double_the_difference([-1, -2, 0]) == 1 + 2 = 3
    double_the_difference([9, -2]) == 7 + 2 = 9
    double_the_difference([0]) == 0
    
    If the input list is empty, return 0. 
    If the input list contains only one element, return 0.
    '''



if __name__ == "__main__":
    check(double_the_difference)
    # Write your code here.
