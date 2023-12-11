def fix_spaces(text):
    import re
    
    # Read input from user
    text = input("Enter a string with spaces: ")
    
    # Replace all spaces with underscores
    return re.sub(r"\s+", "_", text)