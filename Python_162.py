import hashlib

def string_to_md5(th):
    if th is not None:
        return hashlib.md5(th.encode()).hexdigest()
    else:
        return None

th = input()
if th:
    print(string_to_md5(th))
else:
    print("Please provide a string.")