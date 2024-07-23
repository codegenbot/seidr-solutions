```
first_list = [[1, 2], [3, 4]]
second_list = [10, 20, 30]

def double_the_difference(lst1, lst2):
    total = sum(num**2 for sublist in lst1 for num in sublist if isinstance(num, int) and num >= 0)
    return abs(total - sum(lst2)) // len(lst2) * 2

print(double_the_difference(first_list, second_list))