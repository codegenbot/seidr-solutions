def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    # Initialize a dictionary to store the previous indices
    prev_indices = {}
    
    # Loop through each character in the text string
    for i, c in enumerate(text):
        # If the current character is equal to the first character of the target string
        if c == target[0]:
            # Check if the rest of the text matches the target string
            if text[i:i+len(target)] == target:
                # Add the current index to the list of indices
                prev_indices[i] = 1
    
    # Return a list of all the indices where the target string appeared
    return list(prev_indices.keys())