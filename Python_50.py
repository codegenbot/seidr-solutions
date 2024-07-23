```python
def decode_shift(s: str):
    while True:
        try:
            shift = int(input("Enter the shift value: "))
            return "".join([chr(((ord(ch) - ord('a')) % 26) + ord('a')) if ch.isalpha() else ch for ch in s])
        except ValueError:
            print("Invalid input. Please enter an integer.")