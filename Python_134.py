def check_palindrome(input_string):
    input_string = input_string.replace(" ", "").lower()
    return input_string == input_string[::-1]

print(check_palindrome("A man a plan a canal Panama"))