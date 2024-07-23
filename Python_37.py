```
def check(lst):
    if len(set(lst)) == 1:
        return "All elements are same"
    else:
        return "Elements are not all the same"

your_list = [1, 2, 3, 4]
result = check(your_list)
print(result)