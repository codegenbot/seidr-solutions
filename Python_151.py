```
def calculate_difference(lst):
    def double_the_difference():
        lst.sort()
        return (lst[-1] - lst[0]) * 2
    result = double_the_difference()
    return result

print(calculate_difference([1, 2, 3]))