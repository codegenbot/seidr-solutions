import hashlib
import sys

def string_to_md5(text):
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()

result_list = []

for text in sys.stdin:
    result = string_to_md5(text.strip())
    if result != None:
        result_list.append(result)

for result in result_list:
    print(result)