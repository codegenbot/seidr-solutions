def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0) * 2

input_list = list(map(int, input("Enter a list of numbers: ").split()))
print(double_the_difference(input_list))