def sum_of_odd_numbers(lst):
    "Returns the sum of all odd numbers in a given list."
    return sum([i for i in lst if i % 2 != 0])


# example input
input_list = [1, 2, 3, 4, 5]
solution = sum_of_odd_numbers(input_list)


# define check function
def check(solution):
    print("The sum of odd numbers is:", solution)


check(solution)