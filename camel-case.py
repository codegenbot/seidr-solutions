def camel_case(input_string):
    return "".join(word.capitalize() for word in input_string.split("-")) + " ".join(
        part.strip().capitalize() for part in input_string.split()
    )


print(camel_case(input("Enter a string: ")))