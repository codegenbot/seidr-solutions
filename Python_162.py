import hashlib


def string_to_md5(text):
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()


result_list = []

while True:
    try:
        text = input().rstrip()
        if not text:
            break
        result = string_to_md5(text)
        if result != None:
            result_list.append(result)
    except EOFError:
        break

for result in result_list:
    print(result)