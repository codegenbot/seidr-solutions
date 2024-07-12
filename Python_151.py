```
def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0) * 2

def check():
    lst1 = [1, 3, -1, 5, 6]
    odd_sum = 25
    lst2 = [4, 9, 8]
    result1 = double_the_difference(lst1)
    result2 = double_the_difference(lst2)
    print("For list 1: " + str(result1 == odd_sum))
    print("For list 2: " + str(result2 == odd_sum))

check()