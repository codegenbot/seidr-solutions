```
def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)

user_input = [1, 3, 4, 5, 6]
result = double_the_difference(user_input)
print(result)