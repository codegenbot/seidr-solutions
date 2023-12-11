def indices_of_substring(text, target):
    return [i for i in range(len(text) - len(target) + 1) if text[i:i+len(target)] == target]

# Test case 1:
print(indices_of_substring("banana", "an")) # [1,3]

# Test case 2:
print(indices_of_substring("hello world", "or")) # [7]

# Test case 3:
print(indices_of_substring("abcde", "ab")) # [0]