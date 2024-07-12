import hashlib

def string_to_md5(s):
    return hashlib.md5(s.encode()).hexdigest()

print("Please enter some text: ", end="")
user_input = input()
output = string_to_md5(user_input)
print(f"Output: {output}")