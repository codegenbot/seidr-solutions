"""Take a string in kebab-case and convert all of the words to camelCase. Each (group) of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string"-> "camelCase exampleTestString".
For example:

input:indented-code

output:
indentedCode

input: no-space-or-dash

output: no space or dash

nospaceordash

input:
one-two-or   three-words


output:
oneTwoOr--threeWords


output:
this---is the cluememe nobody-expected
input:
gettingcha
"""
if __name__ == '__main__':
    s = input()
    s = s.split(" ")
    for i in range(len(s)):
        s[i] = s[i].split("-")
        for j in range(len(s[i])):
            if j == 0:
                s[i][j] = s[i][j].lower()
            else:
                s[i][j] = s[i][j].capitalize()
        s[i] = "".join(s[i])
    s = " ".join(s)
    print(s)
