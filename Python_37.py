````
def check(lst):
    return [x for x in lst if x % 2 != 0]

your_list = [1, 2, 3, 4]
result = check(your_list)
print(result)