def check(increment_list):
    l = [1, 2, 3, 4, 5]
    return increment_list(l)

# Call the function with a list argument
print(check(lambda x: [num + 10 for num in x]))