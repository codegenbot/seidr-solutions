Here is the Python solution for the problem:

def camel_case(text):
    result = ""
    for word in text.split():
        if result:
            result += ''.join(word.capitalize()).lstrip("'").rstrip(" ")
        else:
            result += word.replace("-", " ").capitalize().lstrip("'").rstrip(" ")
    return result