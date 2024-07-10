def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i >= 0)

def check(odd_sum):
    result = double_the_difference([1, 2, -3, 4]) 
    if result == odd_sum:
        print("True")
    else:
        print("False")

check(9)