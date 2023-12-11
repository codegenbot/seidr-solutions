def camel_case(s):
    return "".join([w.title() if w else w for w in s.split("-")])
```
In this solution, we use the `split()` method to split the input string into a list of words at each space or dash. Then, we use a list comprehension to iterate over the list and capitalize the first letter of each word using the `title()` method, if it's not an empty string. Finally, we join the list of words back together with no spaces to form the output string in camelCase format.

Note that this solution assumes that the input string is a valid kebab-case string, which means it must contain only lowercase letters, numbers, and dashes ('-'). If the input string contains any other characters, the solution will not work correctly.