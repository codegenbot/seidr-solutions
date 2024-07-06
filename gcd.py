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
        # Handle overlapping occurrences of the target string
        elif text[i : i + window_size] in target:
            indices.extend(
                [i + j for j in range(window_size) if text[i + j : i + j + 1] == target]
            )
    return indices