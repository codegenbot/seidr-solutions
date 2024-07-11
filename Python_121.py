def this_function_takes_a_list_as_input_and_returns_the_sum_of_all_odd_numbers_in_that_list(lst):
    """
    This function takes a list as input and returns the sum of all odd numbers in that list.
    """
    return sum(i for i in lst if i % 2 != 0)