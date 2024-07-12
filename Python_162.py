```
import hashlib


def string_to_md5(s):
    try:
        return hashlib.md5(s.encode()).hexdigest()
    except Exception as e:
        print(f"An error occurred: {str(e)}")
        return None


print("Please enter some text: ", end="")
output = string_to_md5(input())
if output is not None:
    print(f"Output: {output}")