input_strings = input("Enter a list of strings separated by space: ").split()

def longest(strings):
    max_length = 0
    longest_string = ''
    for string in strings:
        if len(string) > max_length:
            max_length = len(string)
            longest_string = string
    return longest_string

result = longest(input_strings)
print(result)