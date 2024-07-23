```
def count_odd(lst):
    return sum(i for i in lst if i % 2 != 0)

input_list = [1, 3, 4, 5, 6]
print(count_odd(input_list))