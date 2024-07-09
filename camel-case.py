```
def camel_case(s):
    return (
        s[0].upper() + "".join(word.capitalize() for word in s[1:].split())
        if " " in s
        else s.replace("-", " ").capitalize()
    )


print(camel_case("nospaceordash"))
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))