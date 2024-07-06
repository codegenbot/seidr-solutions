```
text = input("Please enter a string: ")
try:
    print(string_to_md5(text))
except Exception as e:
    print(str(e))