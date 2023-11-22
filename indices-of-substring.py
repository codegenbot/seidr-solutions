# Plan
1. Read the text string from the user.
2. Read the target string from the user.
3. Initialize an empty list called `indices`.
4. Start a loop from index 0 to len(text) - len(target) + 1.
5. Check if the slice of text from index to index + len(target) is equal to the target string.
6. If it is equal, append the index to the `indices` list.
7. After the loop ends, print the `indices` list in the required format.

# Implementation
```python
text = input()
target = input()
indices = []
for i in range(len(text) - len(target) + 1):
    if text[i:i+len(target)] == target:
        indices.append(i)
print(' '.join(map(str, indices)))