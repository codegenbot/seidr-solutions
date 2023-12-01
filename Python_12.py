def longest(string_list):
    if not string_list:
        return None
    return max(string_list, key=len)

input_string = input("Enter a list of strings: ")
strings = input_string.split()

result = longest(strings)
print("Longest string:", result)