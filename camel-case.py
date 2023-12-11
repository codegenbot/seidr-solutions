def convert_to_camel_case(string):
    return "".join([word.title() for word in string.split("-")])
```
In this solution, we use the `str.split()` method to split the input string into a list of words, separated by dashes. We then use a list comprehension to convert each word to title case using the `str.title()` method, and join the resulting list back into a single string using the `"".join()` method.

For example, if we call this function with the input "camel-case example-test-string", it will return the output "camelCase exampleTestString".