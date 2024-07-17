def camel_case(s):
    return (
        " ".join(word.capitalize() for word in s.split(" "))
        if s.count(" ") > 0
        else s.replace("-", " ").capitalize()
    )