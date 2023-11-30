def double_the_difference(lst):
    lst = [2*x for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0]
    return sum(lst)

lst = [1, 3, 5, 7, 9]  # Example list
odd_sum = double_the_difference(lst)