import re


def words_string(s):
    # Read input from user
    inp = input("Enter a string: ")

    # Split the input into words
    words = re.split(r"\s+", inp)

    # Return the output based on the task description
    if len(words) == 1:
        return "The string contains one word."
    else:
        return f"The string contains {len(words)} words."