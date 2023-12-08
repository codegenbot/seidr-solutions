```
def get_indices(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices
```
This code will return a list of integers representing the indices at which the target string appears in the text string. The function first initializes an empty list called `indices`. Then, it iterates through each character in the text string using a for loop and checks if the substring starting from that index and ending at a length equal to the target string is equal to the target string. If it is, then it appends the index to the `indices` list. Finally, it returns the `indices` list.