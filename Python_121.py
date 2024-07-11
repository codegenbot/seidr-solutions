this_function_takes_a_list_as_input_and_returns_the_sum_of_all_odd_numbers_in_that_list = lambda lst: sum(i for i in lst if i % 2 != 0)

lst = input("Enter a list of numbers separated by space: ")

lst = [int(num) for num in lst.split()]
result = this_function_takes_a_list_as_input_and_returns_the_sum_of_all_odd_numbers_in_that_list(lst)

print(f"The sum of all odd numbers in the given list is: {result}")