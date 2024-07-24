```
def check():
    lst = [1,3,5]
    odd_sum = double_the_difference(lst)
    print(odd_sum)

def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)

check()