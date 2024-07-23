```
def double_the_difference(list1, list2):
    difference = sum(list1) - sum(list2)
    return 2 * abs(difference)

first_list = [5, 10, 15]
second_list = [5, 20, 30]

print(double_the_difference(first_list, second_list))