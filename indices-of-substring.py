def indices_of_substring(text, target):
    # Initialize an empty list to store the indices
    indices = []
    # Loop through each character in the text
    for i in range(len(text)):
        # Check if the current character matches the first character of the target
        if text[i] == target[0]:
            # Check if the remaining characters of the text match the target
            for j in range(1, len(target)):
                if i + j < len(text) and text[i + j] != target[j]:
                    break
            else:
                # If we reach this point, we have found a match
                indices.append(i)
    return indices