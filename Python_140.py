# Write a Python function that takes in a string and returns a new string where all consecutive spaces are compressed to a single space
def fix_spaces(text):
    text = re.sub(r"\s+", "_", text)
    return text.replace(" ", "")