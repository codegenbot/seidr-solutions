def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)

user_input = input("Enter a list of numbers (separated by space): ")
print(double_the_difference(list(map(int, user_input.split()))))