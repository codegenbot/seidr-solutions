def increment_list(l):
    return [x + 1 for x in l]


# Input provided by the user
input_list = list(map(int, input().split()))

# Call the function with input_list and print the result
print(increment_list(input_list))