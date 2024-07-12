```
import hashlib
def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = input("Please enter some text: ").strip().replace("\n", "").lower()
print(string_to_md5(text))