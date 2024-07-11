```" 
def camel_case(s):
    result = s.split("-")[0].lower()
    for word in s.split("-")[1:]:
        result += word.capitalize()
    return result