
def find_indices(text, target):
    # Initialize an empty list to store the indices
    indices = []
    # Loop through each character in the text
    for i in range(len(text)):
        # Check if the current character matches the first character of the target
        if text[i] == target[0]:
            # If it does, check if the remaining characters in the text match the remaining characters in the target
            for j in range(1, len(target)):
                # If the characters don't match, break out of the loop
                if text[i+j] != target[j]:
                    break
            else:
                # If the characters all match, add the index to the list
                indices.append(i)
    return indices
