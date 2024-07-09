def indices_of_substring(text, target):
    """Given a text string and a target string, return a list of integers 
    of the indices at which the target appears in the text. Targets may overlap."""
    result = []
    last_pos = 0
    while last_pos < len(text):
        pos = text.find(target, last_pos)
        if pos != -1:
            result.append(pos)
            last_pos = pos + 1  
        else:
            break
    return result