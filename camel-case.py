def camel_case(kebab_string):
    words = kebab_string.split("-")
    return "".join([word.title() for word in words])
```
This code uses the `str.split()` method to split the input string into individual words, and then uses a list comprehension to create a new list of words where each word is converted to title case using the `str.title()` method. Finally, it joins the list of words back together into a single string using the `"".join()` method.

Note that this code assumes that the input string will always be in kebab-case format, and that there will never be any spaces or dashes within a single word. If these assumptions are not true, the code may need to be modified accordingly.