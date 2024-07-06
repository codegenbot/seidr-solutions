import re


@repl(inp="Enter a string: ")
def words_string(s):
    # Split the input into words
    words = re.split(r"\s+", s)

    # Return the output based on the task description
    if len(words) == 1:
        return "The string contains one word."
    else:
        return f"The string contains {len(words)} words."