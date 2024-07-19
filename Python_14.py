def prefixes(input_string):
    return [input_string[:i] for i in range(1, len(input_string)+1)]

def suffixes(input_string):
    return [input_string[i:] for i in range(len(input_string))]

def substrings(input_string):
    return [input_string[i:j] for i in range(len(input_string)) for j in range(i+1, len(input_string)+1)]

def is_palindrome(input_string):
    return input_string == input_string[::-1]

input_string = input("Enter a string: ")
print(prefixes(input_string))
print(suffixes(input_string))
print(substrings(input_string))
print(is_palindrome(input_string))