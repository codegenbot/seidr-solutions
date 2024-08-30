def kebab_to_camel(s):
    return " ".join(word.capitalize() for word in s.split("-"))


print(kebab_to_camel("camel-case example-test-string"))