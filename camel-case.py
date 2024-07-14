```
def camel_case(s):
    if '-' in s:
        words = s.split('-')
        return ''.join(word.capitalize() for word in words)
    else:
        return s.replace('-', '').capitalize()

print(camel_case("nospaceordash")) 
print(camel_case("two-words")) 
print(camel_case("two words")) 
print(camel_case("all separate words"))