def double_the_difference(lst):
    result = 0
    for num in lst:
        if num % 2 != 0 and num > 0:
            result += num**2
    return result


# Define the input list
lst = [1, 2, 3, 4, 5]

# Call the function with the defined list
double_the_difference(lst)