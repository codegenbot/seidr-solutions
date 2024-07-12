import hashlib

def string_to_md5(s):
    return hashlib.md5(s).hexdigest()

print("Please enter some text:", end="")
print(f"Output: {string_to_md5(input().encode())}")