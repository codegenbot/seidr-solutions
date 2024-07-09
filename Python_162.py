import hashlib

def string_to_md5(text):
    if text is not None:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

th := input()
if th:
    print(string_to_md5(th))
else:
    print("Please provide a string.")