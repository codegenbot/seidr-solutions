def camel_case(input_str):
    words = input_str.split("-")
    output_str = words[0].capitalize()
    for i in range(1, len(words)):
        output_str += words[i].capitalize()
    return output_str

print(camel_case("nospaceordash")) 
print(camel_case("two-words"))
print(camel_case("two words"))
print(camel_case("all separate words"))