```
def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)

def check(odd_sum, lst):
    if double_the_difference(lst) == odd_sum:
        print("Correct")
    else:
        print("Incorrect")