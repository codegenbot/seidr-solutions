def double_the_difference(lst1, lst2):
    return (max(max(lst1)-min(lst2), max(lst2)-min(lst2))) * 2
print(double_the_difference([10, 15], [3, 5]))