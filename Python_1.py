```
def separate_paren_groups(input_str):
    return input_str.split(")(")

input_str = input("Enter a string: ")
print(separate_paren_groups(input_str))