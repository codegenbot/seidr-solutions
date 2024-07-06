def double_the_difference(lst):
    result = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    print(f"The difference between {max(lst)} and the average of the squares is: {result - (sum(x**2 for x in lst) / len(lst))}")