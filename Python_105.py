```
def check(input_data):
    num1, num2, num3 = input_data
    total_sum = sum([num1, num2, num3])
    if 17 < total_sum < 55:
        return True
    else:
        return False