def indices_of_substring(text, target):
    # Get user input for text and target strings
    text = input("Enter text string: ")
    target = input("Enter target string: ")

    # Return list of indices at which target appears in text
    return [m.start() for m in re.finditer(target, text)]