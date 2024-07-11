```
def double_the_difference(lst):
    lst.sort()
    return (lst[-1] - lst[0]) * 2

def check(f, input_list):
    print(f(input_list))

check(double_the_difference, [1, 2, 3])