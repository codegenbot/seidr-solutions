def flip_case(string):
    return string.swapcase()

def check(string):
    return flip_case(string)

# Call the check function with input
input_str = input("Enter a string: ")
result = check(input_str)
print(result)