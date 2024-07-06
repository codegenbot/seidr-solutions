import re


def words_string(s):
    # Read input from the user
    user_input = input("Enter a string: ")

    # Split the input into words using regular expressions
    words = re.split(r"\s+", user_input)

    return words