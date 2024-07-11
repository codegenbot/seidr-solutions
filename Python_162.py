```
import hashlib


def string_to_md5():
    while True:
        text = input("Enter some text (or 'q' to quit): ").strip()
        if text.lower() == 'q':
            print('Goodbye!')
            return None
        elif not text: 
            print("Please enter some text.")
        else:
            return hashlib.md5(text.encode()).hexdigest()


print(string_to_md5())