
def double_the_difference(lst):
    '''
    Given a list of numbers, return the sum of squares of the numbers
    in the list that are odd. Ignore numbers that are negative or not integers.
    
    double_the_difference([1, 3, 2, 0]) == 1 + 9 + 0 + 0 = 10
    double_the_difference([-1, -2, 0]) == 0
    double_the_difference([9, -2]) == 81
    double_the_difference([0]) == 0  
   
    If the input list is empty, return 0.
    '''

    # Your code here

    final_sum = 0

    if not lst:
        return final_sum

    # Remove non-integer numbers, as well as negative numbers from the list.
    # lst_filtered = [item for item in lst if isinstance(item, int) and item >= 0]
    lst_filtered = []
    for item in lst:
        if isinstance(item, int) and item >= 0:
            lst_filtered.append(item)

    # Calculate the sum of squares of the odd numbers in lst_filtered

    ###################
    # Optimization 1 - no need to iterate through the entire list.
    ###################

    # for item in lst_filtered:
    #     final_sum += item ** 2

    ###################
    # Optimization 2 - iterate through half of the list.
    ###################

    # lst_length = len(lst_filtered)
    # for item in lst_filtered[:lst_length // 2]:
    #     final_sum += item ** 2

    ###################
    # Optimization 3 - iterate through only the odd numbers in the list.
    ###################

    # for item in lst_filtered[1::2]:
    #     final_sum += item ** 2

    ###################
    # Optimization 4 - use sum() function
    ###################

    # final_sum = sum([item ** 2 for item in lst_filtered[1::2]])

    ###################
    # Optimization 5 - use map() and lambda function
    ###################

    # method 1

    # final_sum = sum(
    #     list(
    #         map(
    #             lambda x: x ** 2, lst_filtered[1::2]
    #         )
    #     )
    # )

    # method 2

    final_sum = sum(
        map(
            lambda x: x ** 2, lst_filtered[1::2]
        )
    )

    return final_sum

print(double_the_difference([1, 3, 2, 0]))
print(double_the_difference([-1, -2, 0]))
print(double_the_difference([9, -2]))
print(double_the_difference([0]))
print(double_the_difference([]))
