```python
def decode_shift(s: str):
    """Complete the following code given the task description and function signature.."""
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])