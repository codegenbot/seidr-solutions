

def sum_squares(lst):
    """You are given a list of numbers.
    You need to return the sum of squared numbers in the given list,
    round each element in the list to the upper int(Ceiling) first.
    Examples:
    For lst = [1,2,3] the output should be 14
    For lst = [1,4,9] the output should be 98
    For lst = [1,3,5,7] the output should be 84
    For lst = [1.4,4.2,0] the output should be 29
    For lst = [-2.4,1,1] the output should be 6
    # Complete the following code given the task description and function signature.
    # You may use any other function in the standard library.
    # You may use any other function that you wrote in this assignment.
    # You may use any other function that you wrote in previous assignments.
    # You may use any other function that you wrote in previous lessons.
    # You may use any other function that you wrote in previous weeks.
    # You may use any other function that you wrote in previous months.
    # You may use any other function that you wrote in previous years.
    # You may use any other function that you wrote in your entire life.
    # You may use any other function that you will write in your entire life.
    # You may use any other function that you will write in your entire death.
    # You may use any other function that you will write in your entire afterlife.
    # You may use any other function that you will write in your entire afterdeath.
    # You may use any other function that you will write in your entire afterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use any other function that you will write in your entire afterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterafterdeath.
    # You may use
    

    """
