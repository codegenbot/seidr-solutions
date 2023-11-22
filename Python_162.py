import hashlib


def string_to_md5():
    text = input().strip()
    return hashlib.md5(text.encode()).hexdigest()


result = string_to_md5()
print(result)