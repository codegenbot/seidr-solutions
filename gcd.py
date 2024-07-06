def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    # Use a sliding window of size len(target) to search for the target string
    window_size = len(target)
    # Initialize the start and end indices of the window
    start = 0
    end = window_size - 1
    # Initialize the list of indices
    indices = []
    # Loop through the text, moving the window by one character at a time
    while start < len(text) - window_size + 1:
        # Check if the substring between the start and end indices matches the target string
        if text[start:end+1] == target:
            # If it does, add the start index to the list of indices
            indices.append(start)
        # Move the window one character to the right
        start += 1
        end += 1
    return indices

def main():
    print("GCD Tests")
    print(gcd(893320, 978960)) # should return 40
    print("Indices of Substring Tests")
    text = "banana"
    target = "ana"
    indices = indices_of_substring(text, target)
    print(indices) # should return [1, 3]
    text = "abcde"
    target = "cde"
    indices = indices_of_substring(text, target)
    print(indices) # should return [2]
    text = "abcde"
    target = "abcd"
    indices = indices_of_substring(text, target)
    print(indices) # should return []
    text = "abcde"
    target = "abc"
    indices = indices_of_substring(text, target)
    print(indices) # should return [0]
    
if __name__ == "__main__":
    main()