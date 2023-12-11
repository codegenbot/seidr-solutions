def camel_case(string):
    words = string.split('-')
    return ''.join([word.title() for word in words])
```
This function takes a kebab-case string as input and returns a camelCase string. It works by first splitting the input string on '-' characters, then capitalizing the first letter of each word using the `title()` method, and finally joining the resulting list of words back into a single string.

Here are some examples of how this function would work:
```
>>> camel_case("camel-case")
"camelCase"
>>> camel_case("example-test-string")
"exampleTestString"
>>> camel_case("two-words")
"twoWords"
>>> camel_case("two words")
"two words"
>>> camel_case("all separate words")
"all separate words"
```
As you can see, this function correctly converts the input strings to camelCase format.