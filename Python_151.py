def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0)

input_list = input("Enter a list of integers: ").split()
result = double_the_difference(input_list)