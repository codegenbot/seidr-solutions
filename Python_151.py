def double_the_difference(lst1, lst2):
    return (max(lst2) - min(lst1)) * 2

print(double_the_difference([1, 3, 5], [2, 4, 6]) == (max(2,4,6) - min(1,3,5)) * 2)