```
def indices_of_substring(text, target):
"""Triple quote start
Given a text string and a target string, return a list of integers of the 
indices at which the target appears in the text.
Triple quote end"""
    result = []
    index = 0
    while True:
        index = text.find(target, index)
        if index == -1:
            break
        result.append(index)
        index += len(target)