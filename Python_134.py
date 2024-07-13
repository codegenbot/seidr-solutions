def check_palindrome(input_string):
    if len(input_string) <= 1:
        return True
    if input_string[0].isalpha() != input_string[-1].isalpha():
        return False
    return check_palindrome(input_string[1:-1])