```
def double_the_difference(lst1, lst2):
    return sum(x * y for x, y in zip(lst1[0], lst2)) - sum(x * y for x, y in zip(lst1[1], lst2))

def check():
    first_list = [[1, 2], [3, 4]]
    second_list = [-1, 0, 1]
    print(double_the_difference(first_list, second_list))