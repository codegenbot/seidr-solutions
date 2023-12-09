
```python
def decode_shift(s: str) -> str:
    # Check if input format is correct
    if not s.isalpha() or len(s) < 1:
        raise ValueError("Input must be a non-empty string of letters.")

    # Read input and convert to lowercase
    message = s.lower()

    # Decode the message using the Caesar cipher with a shift of 5
    decoded_message = ""
    for ch in message:
        if ch.isalpha():
            decoded_message += chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a"))
        else:
            decoded_message += ch

    return decoded_message
```