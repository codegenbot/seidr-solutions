def indices_of_substring(text, target):
    window_size = len(target)
    indices = []
    for i in range(len(text)):
        if text[i : i + window_size] == target:
            indices.append(i)
            # If the current index is the last character of the target,
            # add it to the list of indices as well.
            if i + window_size == len(text):
                indices.append(i)
    # Add the indices of all overlapping occurrences of the target string.
    for j in range(1, window_size - 1):
        indices.extend([i + j for i in indices if text[i : i + j] == target])
    
    # Check if the target string appears at the end of the text and adjust the indices accordingly.
    if text[-window_size:] == target:
        indices.append(len(text) - window_size)
    return indices