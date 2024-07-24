```
def sum_of_odd_squares(lst):
    return sum([num**2 for num in lst if num % 2 != 0])

input_list = [1, 2, 3, 4, 5]
print(sum_of_odd_squares(input_list))