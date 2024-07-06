
def double_the_difference(my_list):
    result = 0
    for num in my_list:
        if num % 2 == 1 and num > 0:
            result += num ** 2
    return result