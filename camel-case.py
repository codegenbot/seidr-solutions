Here is the Python solution:

def kebab_to_camel(s):
    result = ""
    for word in s.split():
        if not result:
            result += word.capitalize()
        else:
            result += word.capitalize().replace(" ", "")
    return result