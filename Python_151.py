```
def check(f, lst):
    print(f(lst))

def double_the_difference(lst):
    lst.sort()
    return (lst[-1] - lst[0]) * 2

num_list = input("Enter numbers separated by space: ").split()
check(double_the_difference, num_list)