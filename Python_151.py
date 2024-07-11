```
def calculate_difference(lst):
    def double_the_difference(lst):
        lst.sort()
        return (lst[-1] - lst[0]) * 2

    return double_the_difference(lst)

print(calculate_difference([1, 2, 3]))