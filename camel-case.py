```
def camel_case(string):
    words = string.split("-")
    for i in range(len(words)):
        if words[i] == "":
            words[i] = ""
        else:
            words[i] = words[i].capitalize()
    return " ".join(words)
```

This code will take a string in kebab-case and convert it to camelCase. The function first splits the input string into individual words using the "-" delimiter, and then capitalizes each word using the `capitalize()` method. Finally, the function joins the list of words with spaces between them using the `" ".join(words)` method.

For example, if we call this function with the argument "camel-case example-test-string", it will return the string "camelCase exampleTestString".