import math


def sum_squares(lst):
    """"
    This function will take a list of integers. For all entries in the list, the function shall square the integer entry if its index is a 
    multiple of 3 and will cube the integer entry if its index is a multiple of 4 and not a multiple of 3. The function will not 
    change the entries in the list whose indexes are not a multiple of 3 or 4. The function shall then return the sum of all entries. 
    
    Examples:
    For lst = [1,2,3] the output should be 6
    For lst = []  the output should be 0
    For lst = [-1,-5,2,-1,-5]  the output should be -126
    
    if len(lst) == 0:
        return 0
    
    total = 0
    for i in range(0, len(lst)):
        if i % 3 == 0:
            total += lst[i]
        if i % 4 == 0 and i % 3 != 0:
            total += lst[i]**3
    return total

def my_reverse(lst):
    """
    This function will take a list of integers. The function will reverse the list and return it.
    
    Examples:
    For lst = [1,2,3] the output should be [3,2,1]
    For lst = []  the output should be []
    For lst = [-1,-5,2,-1,-5]  the output should be [-5,-1,2,-5,-1]
    """
    
    if len(lst) == 0:
        return lst
    
    temp = lst.copy()
    for i in range(0, len(lst)):
        temp[i] = lst[len(lst)-1-i]
    return temp

def my_sort(lst):
    """
    This function will take a list of integers. The function will sort the list and return it.
    
    Examples:
    For lst = [1,2,3] the output should be [1,2,3]
    For lst = []  the output should be []
    For lst = [-1,-5,2,-1,-5]  the output should be [-5,-5,-1,-1,2]
    """
    
    if len(lst) == 0:
        return lst
    
    temp = lst.copy()
    for i in range(0, len(lst)-1):
        for j in range(0, len(lst)-1):
            if temp[j] > temp[j+1]:
                temp[j], temp[j+1] = temp[j+1], temp[j]
    return temp

def my_max(lst):
    """
    This function will take a list of integers. The function will return the maximum value in the list.
    
    Examples:
    For lst = [1,2,3] the output should be 3
    For lst = []  the output should be None
    For lst = [-1,-5,2,-1,-5]  the output should be 2
    """
    
    if len(lst) == 0:
        return None
    
    max_val = lst[0]
    for i in range(0, len(lst)):
        if lst[i] > max_val:
            max_val = lst[i]
    return max_val

def my_min(lst):
    """
    This function will take a list of integers. The function will return the minimum value in the list.
    
    Examples:
    For lst = [1,2,3] the output should be 1
    For lst = []  the output should be None
    For lst = [-1,-5,2,-1,-5]  the output should be -5
    """
    
    if len(lst) == 0:
        return None
    
    min_val = lst[0]
    for i in range(0, len(lst)):
        if lst[i] < min_val:
            min_val = lst[i]
    return min_val

def my_mean(lst):
    """
    This function will take a list of integers. The function will return the mean value in the list.
    
    Examples:
    For lst = [1,2,3] the output should be 2
    For lst = []  the output should be None
    For lst = [-1,-5,2,-1,-5]  the output should be -2
    """
    
    if len(lst) == 0:
        return None
    
    total = 0
    for i in range(0, len(lst)):
        total += lst[i]
    return total/len(lst)

def my_median(lst):
    """
    This function will take a list of integers. The function will return the median value in the list.
    
    Examples:
    For lst = [1,2,3] the output should be 2
    For lst = []  the output should be None
    For lst = [-1,-5,2,-1,-5]  the output should be -1
    """
    
    if len(lst) == 0:
        return None
    
    temp = my_sort(lst)
    if len(lst) % 2 == 0:
        return (temp[int(len(lst)/2)]+temp[int(len(lst)/2)-1])/2
    else:
        return temp[int(len(lst)/2)]

def my_variance(lst):
    """
    This function will take a list of integers. The function will return the variance value in the list.
    
    Examples:
    For lst = [1,2,3] the output should be 1
    For lst = []  the output should be None
    For lst = [-1,-5,2,-1,-5]  the output should be 7.2
    """
    
    if len(lst) == 0:
        return None
    
    total = 0
    for i in range(0, len(lst)):
        total += (lst[i]-my_mean(lst))**2
    return total/len(lst)

def my_stdev(lst):
    """
    This function will take a list of integers. The function will return the standard deviation value in the list.
    
    Examples:
    For lst = [1,2,3] the output should be 1
    For lst = []  the output should be None
    For lst = [-1,-5,2,-1,-5]  the output should be 2.6832815729
    """
    
    if len(lst) == 0:
        return None
    
    return math.sqrt(my_variance(lst))
































































































































































































    """
