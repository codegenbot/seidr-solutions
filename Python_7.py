```
def filter_by_substring(input_string):
    substring = input("Enter the substring: ")
    if substring in input_string:
        return f"The substring '{substring}' was found in the string."
    else:
        return f"The substring '{substring}' was not found in the string."

def check(function_to_execute):
    return function_to_execute()

print(check(filter_by_substring))