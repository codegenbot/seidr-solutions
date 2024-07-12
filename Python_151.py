```
def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0) * 2

def check():
    lst = [1, 3, -1, 5, 6]
    odd_sum = 25
    if double_the_difference(lst) == odd_sum:
        print("True")
    else:
        print("False")

check()