```
import re
def camel_case(string):
    words = string.split()
    return "".join([word.title() for word in words])
```
The above code defines a function `camel_case` that takes a string input and returns the camel case version of the string. It uses the `str.split()` method to split the input string into a list of words, and then uses a list comprehension to convert each word to title case using the `str.title()` method. The resulting list is then joined together with an empty string to form the final output.

The issue in the original code was caused by using `re.split()` to split the input string into words, which returns a list of strings that are not valid Python identifiers. This resulted in the `SyntaxError` being raised because the resulting list contained invalid characters such as "-" and " ". By replacing `re.split()` with `str.split()`, we avoid this issue and get the correct output.