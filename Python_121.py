```
input_list = [4, 2, 6]
print(check(input_list))
def check(lst):
    return all(i % 2 == 0 for i in lst)