```python
def decode_cyclic(s: str):
    result = ""
    prev_char = None
    for c in s:
        if c != prev_char or (prev_char is None and c == result[-1]):
            result += c
        else:
            result = c + result
        prev_char = c
    return result