def kebab_to_camel_case(s):
    def convert(group):
        words = group.split("-")
        return words[0] + "".join(word.capitalize() for word in words[1:])

    return " ".join(convert(group) for group in s.split())


# Read input from user
input_string = input().strip()
# Print the converted string
print(kebab_to_camel_case(input_string))