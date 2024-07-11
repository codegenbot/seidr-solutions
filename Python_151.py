```
def double_the_difference():
    lst = list(map(int, input("Enter numbers separated by space: ").split()))
    difference = max(lst) - min(lst)
    if len(set(lst)) == 1:
        return 0
    else:
        double_diff = difference * 2
        return double_diff

def check(func):
    print(func())

check(double_the_difference)