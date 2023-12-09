
def double_the_difference(list):
    result = 0
    for num in list:
        if num % 2 == 1 and num > 0:
            result += num ** 2
    return result