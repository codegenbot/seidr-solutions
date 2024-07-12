def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)

input_list = input("Enter a list of numbers (space separated): ").split()
output = double_the_difference([int(x) for x in input_list])
print(output)