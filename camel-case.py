```
def camel_case(input_str):
    words = input_str.split("-")
    result = [words[0].capitalize()]
    for word in words[1:]:
        result.append(word.capitalize())
    return "".join(result)

print(camel_case("nospaceordash")) 
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))