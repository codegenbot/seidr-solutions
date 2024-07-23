```python
def double_the_difference(list1, list2):
    sum_of_lists = sum(sum(pair) for pair in list1)
    total_sum = sum(list2)
    difference = abs((sum_of_lists - total_sum))
    return 3 * difference

def check():
    first_list = [[1, 2], [3, 4]]
    second_list = [-1, 0, 1]
    print(double_the_difference(first_list, second_list))

check()