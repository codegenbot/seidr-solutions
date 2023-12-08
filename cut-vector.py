Solve the following code contest problem: cut-vector. Problem description: Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.

Currently, the code is:
```python
def cut_vector(vector):
    min_diff = math.inf
    spot = 0
    for i in range(1, len(vector)):
        diff = abs(vector[i] - vector[i-1])
        if diff < min_diff:
            min_diff = diff
            spot = i
    return vector[:spot], vector[spot:]
```
The issue is with the `return` statement. In Python, you cannot have multiple expressions on the same line as the `return` keyword. Instead, you need to use parentheses to group the two subvectors and return them together. Here's the corrected code:
```python
def cut_vector(vector):
    min_diff = math.inf
    spot = 0
    for i in range(1, len(vector)):
        diff = abs(vector[i] - vector[i-1])
        if diff < min_diff:
            min_diff = diff
            spot = i
    return (vector[:spot], vector[spot:])
```