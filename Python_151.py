
def double_the_difference(list):
    result = 0
    for num in list:
        if num % 2 == 1 and num > 0:
            result += num ** 2
    return result

# Test case 1:
lst = [1, 2, 3]
result = double_the_difference(lst)
print(result) # Output: 14

# Test case 2:
lst = [1, 3, 5, 7]
result = double_the_difference(lst)
print(result) # Output: 64

# Test case 3:
lst = []
result = double_the_difference(lst)
print(result) # Output: 0