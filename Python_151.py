```
def check(num1, num2, num3):
    result = double_the_difference([num1, num2, num3])
    if result % (2 * min(num1, num2, num3)) == 0:
        return True
    else:
        return False