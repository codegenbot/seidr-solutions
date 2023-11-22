import hashlib

def string_to_md5(text: str) -> str:
    return hashlib.md5(text.encode()).hexdigest()

def get_user_input() -> str:
    return input()

result = string_to_md5(get_user_input())
print(result)