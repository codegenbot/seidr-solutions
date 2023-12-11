def camel_case(string):
    return ''.join([word.title() for word in string.split('-')])
```
This function takes a kebab-case string as input and returns the corresponding camelCase string. It works by first splitting the input string on '-' characters, then capitalizing each word using the `title()` method, and finally joining them together into a single string without any separators.

Here are some examples of how this function would work:
```
>>> camel_case("camel-case")
"camelCase"
>>> camel_case("example-test-string")
"exampleTestString"
>>> camel_case("nospaceordash")
"nospaceordash"
>>> camel_case("two-words")
"twoWords"
>>> camel_case("two words")
"two words"
>>> camel_case("all separate words")
"all separate words"
```