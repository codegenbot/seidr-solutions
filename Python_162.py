import hashlib


def string_to_md5(text):
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()


try:
    text = input("Enter the input text: ")
    result = string_to_md5(text)
    print(result)
except Exception as e:
    print("Error:", e)