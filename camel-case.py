```
def camel_case(s):
    words = s.split("-")
    return "".join(word.capitalize() for word in words[1:]) + words[0].capitalize()

print(camel_case("nospaceordash")) # Nospaceordash
print(camel_case("two-words")) # TwoWords
print(camel_case("two words")) # TwoWords
print(camel_case("all separate words")) # AllSeparateWords