```
def camel_case(s):
    if '-' in s:
        return ''.join(word.capitalize() for word in s.replace('-', ' ').split())
    else:
        return s[0].upper() + s[1:].replace('-', '').capitalize()

print(camel_case("nospaceordash")) 
print(camel_case("two-words")) 
print(camel_case("two words")) 
print(camel_case("all separate words"))