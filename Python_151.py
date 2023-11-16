from programlib.programs.e1468da3-06b6-4ab6-b37f-b3c15736a184 import lst, odd_sum

def double_the_difference(lst):
    sum = 0
    for x in lst:
        if x % 2 != 0:
            sum += x
    return sum


check(double_the_difference)
