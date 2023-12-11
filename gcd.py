The updated `indices_of_substring` function checks for overlapping indices and adds them to the output list if necessary. The function uses a nested loop to check for overlapping indices. The outer loop iterates through each character in the text, and the inner loop checks for overlapping indices starting from the current character position. If an overlapping index is found, it is added to the `indices` list.

Here's the updated code:
```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.append(i)
            # Check for overlapping indices
            j = i + len(target) - 1
            while j < len(text):
                if text[j:j+len(target)] == target:
                    indices.append(j)
                j += len(target)
    return indices
```