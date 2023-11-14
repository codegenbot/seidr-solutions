
def double_the_difference(lst):
    '''
    Given a list of numbers, return the sum of the differences between the 
    maximum and minimum numbers in the list.
    
    double_the_difference([1, 3, 2, 0]) == 1 + 9 + 0 + 0 = 10
    double_the_difference([-1, -2, 0]) == 0
    double_the_difference([9, -2]) == 81
    double_the_difference([0]) == 0  
   
    If the input list is empty, return 0.
    '''
    
    # YOUR CODE GOES HERE
    # max_num = max(lst)
    # min_num = min(lst)
    # difference = max_num - min_num
    # return difference
    # print(max_num)
    # print(min_num)
    # print(difference)

    if lst == []:
        return 0
    else:
        numbers = [x for x in lst if type(x) == int and x > 0]
        return 2*(max(numbers) - min(numbers))


print(double_the_difference([1, 3, 2, 0]))
print(double_the_difference([-1, -2, 0]))
print(double_the_difference([9, -2]))
print(double_the_difference([0]))
print(double_the_difference([]))
