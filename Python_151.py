
# Define a function called double_the_difference that takes a list of integers as input and returns the sum of the squares of all the odd numbers in the list.
def double_the_difference(list):
    lst = []
    result = 0
    for num in list:
        if num % 2 == 1 and num > 0:
            result += num ** 2
    return result
