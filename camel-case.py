```
def camel_case(s):
    words = s.replace("-", " ").split()
    result = ""
    for i, word in enumerate(words):
        if i > 0:
            result += word.capitalize()
        else:
            result += word
    return result


print(camel_case("nospaceordash"))
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))