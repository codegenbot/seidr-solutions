Here is the modified code:

```python
import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    text = input("Enter a string: ")
    result = string_to_md5(text.lower())
    print(result)
    while True:
        choice = input("Do you want to convert another string? (yes/no): ")
        if choice.lower() != "yes":
            break
        text = input("Enter a string: ")
        result = string_to_md5(text.lower())
        print(result)