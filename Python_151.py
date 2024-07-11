def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)

user_input = input("Enter a list of numbers: ").split()
print(double_the_difference([int(x) for x in user_input]))