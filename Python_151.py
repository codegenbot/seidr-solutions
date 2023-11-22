def double_the_difference(my_list):
    return sum(x**2 for x in my_list if x > 0 and isinstance(x, int) and x % 2 != 0)

double_the_difference(my_list) == odd_sum