```
def check_palindrome(input_string):
    input_string = "".join(c for c in input_string if c.isalnum()).lower()
    if len(input_string) == 0:
        return "Error: The file is empty."
    else:
        return input_string == input_string[::-1]