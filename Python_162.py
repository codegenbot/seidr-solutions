import hashlib

def string_to_md5():
    text = input("Please enter some text: ")
    try:
        return hashlib.md5(text.encode()).hexdigest()
    except Exception as e:
        print(f"Error occurred: {str(e)}")
        return None