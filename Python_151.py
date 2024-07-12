```
def double_the_difference(lst):
    positive_odd_numbers = [x**2 for x in lst if x > 0 and x % 2 != 0]
    return sum(2*y for y in positive_odd_numbers)

def check(lst):
    result = double_the_difference(lst)
    print("The sum of squares of positive odd numbers in the list is: ", result)