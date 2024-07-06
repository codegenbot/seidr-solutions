def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0)

user_list = list(map(int, input("Enter a list of integers separated by space: ").split()))
print(double_the_difference(user_list))