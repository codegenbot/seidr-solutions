
def double_the_difference(lst):
    result = 0
    for num in lst:
        if num % 2 == 1 and num > 0:
            result += num ** 2
    return result

# Define the list 'lst' before calling the function
lst = [1, 3, 5, 7]
double_the_difference(lst)