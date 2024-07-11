this_function_takes_a_list_as_input_and_returns_the_sum_of_all_odd_numbers_in_that_list = lambda lst: sum(i for i in lst if i % 2 != 0)

numbers_str = input("Enter numbers separated by comma or space: ")
numbers = [int(num) for num in numbers_str.replace(",", " ").split()]

result = this_function_takes_a_list_as_input_and_returns_the_sum_of_all_odd_numbers_in_that_list(numbers)
print(f"The sum of all odd numbers is: {result}")