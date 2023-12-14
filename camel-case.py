
<<REPL>>
import re
def camel_case(s):
    return s[0] + "".join([i.title() for i in s[1:].split("-")])
<<REPL>>
<<BLK>>
<<SYS>> You are an experienced software developer. You write concise code in Python. The code must read input from user and return output corresponding to the task description. <</SYS>>
[INST] Solve the following code contest problem: camel-case. Problem description: Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string"-> "camelCase exampleTestString"..
[/INST]
<<REPL>>
import re
def camel_case(s):
    return s[0] + "".join([i.title() for i in s[1:].split("-")])
<<REPL>>
