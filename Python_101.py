import re


def words_string():
    # Read input from user
    inp = input("Enter a string: ")

    # Check if the input is valid
    if not re.match(r"\w+", inp):
        print("Invalid input. Please enter a valid string.")
        return

    # Split the input into words
    words = re.split(r"\s+", inp)

    # Return the output based on the task description
    if len(words) == 1:
        return "The string contains one word."
    else:
        return f"The string contains {len(words)} words."