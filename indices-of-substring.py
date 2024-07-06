def indices_of_substring(text, target):
    result = []
    start = 0
    while True:
        # Find the next occurrence of the target string in the text
        match = text.find(target, start)
        if match == -1:
            break
        # Add the index to the result list
        result.append(match)
        # Update the starting index for the next search
        start = match + len(target)
    return result