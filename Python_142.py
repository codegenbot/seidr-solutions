```
```
def sum_of_odd_squares(lst):
    total_sum = sum(i ** 2 for i in lst if i % 2 != 0)
    return total_sum

input_list = [1, 2, 3, 4, 5]
print(sum_of_odd_squares(input_list))
```