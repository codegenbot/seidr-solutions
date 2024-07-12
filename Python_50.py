```
```python
def check(func, *args):
    return func(*args)

def decode(encoded_str, shift):
    result = ""
    try:
        if not 0 <= shift <= 25:
            raise ValueError("Invalid shift value. Please enter a value between 0 and 25.")
        for ch in encoded_str:
            try:
                if ch.isalpha():
                    if "A" <= ch <= "Z":
                        result += chr((ord(ch) - ord("A") - shift) % 26 + ord("A"))
                    elif "a" <= ch <= "z":
                        result += chr((ord(ch) - ord("a") - shift) % 26 + ord("a"))
                else:
                    result += ch
            except AttributeError:
                print("Invalid character. Please enter only alphanumeric characters or spaces.")
    except ValueError as e:
        print(e)
    print(result)

check(decode, "Hello World", 3)
```