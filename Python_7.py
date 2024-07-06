```
def filter_by_substring(input_string):
    substring = "substring"
    if substring in input_string:
        return "The string contains the substring."
    else:
        return "The string does not contain the substring."

def check(func, input_string):
    result = func(input_string)
    print(result)

input_string = input("Enter a string: ")
check(filter_by_substring, input_string)