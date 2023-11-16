


def sum_squares(lst):
    """"
    This function will take a list of integers. For all entries in the list, the function shall square the integer entry if its index is a 
    multiple of 3 and will cube the integer entry if its index is a multiple of 4 and not a multiple of 3. The function will not 
    change the entries in the list whose indexes are not a multiple of 3 or 4. The function shall then return the sum of all entries. 
    
    Examples:
    For lst = [1,2,3] the output should be 6
    For lst = []  the output should be 0
    For lst = [-1,-5,2,-1,-5]  the output should be -126
lst = []
summary = 0

# Find indexes of all numbers that are divisible by 3 and 4
multiple_3_4 = [i for i, n in enumerate(lst) if i % 3 == 0 and i % 4 == 0]

# Find indexes of all numbers that are only divisible by 3
multiple_3 = [i for i, n in enumerate(lst) if i % 3 == 0 and i % 4 != 0]

# Find indexes of all numbers that are only divisible by 4
multiple_4 = [i for i, n in enumerate(lst) if i % 3 != 0 and i % 4 == 0]

# Get cubes of numbers divisible by 4
cubes = [lst[i]*lst[i]*lst[i] for i in multiple_4]

# Get squares of numbers divisible by 3 - numbers divisible by both 3 and 4 are already in the cube list
common_nums = set(multiple_3) & set(multiple_3_4)
for i in common_nums:
    multiple_3.remove(i)
squares = [lst[i]*lst[i] for i in multiple_3]

# Determine square-and-cubes with indexes not in common
square_and_cubes = cubes + squares

# Determine final summary
for i in square_and_cubes:
    summary += i
    
return summary
    """
