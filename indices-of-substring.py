def indices_of_substring(text, target):
    # Initialize an empty list to store the indices
    indices = []

    # Loop through each character in the text
    for i in range(len(text)):
        # Check if the current character is equal to the first character of the target
        if text[i] == target[0]:
            # Check if the target is a substring of the text starting at the current index
            if text[i:i+len(target)] == target:
                # If it is, add the index to the list of indices
                indices.append(i)

    return indices