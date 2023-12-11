def camel_case(string):
    words = string.split("-")
    return "".join([word.title() for word in words])

input:
camel-case example-test-string
output:
camelCase exampleTestString

input:
nospaceordash
output:
nospaceordash

input:
two-words
output:
twoWords

input:
two words
output:
two words

input:
all separate words
output:
all separate words