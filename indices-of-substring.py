```
import itertools

def indices_of_substring(text):
    target = input()
    result = []
    for i, char in enumerate(itertools.zip_longest(*[(text,)*(len(target)+1)]), 0):
        if ''.join(map(str, filter(None, [char] + list(target)))) == target:
            result.append(i - len(target))
    return sorted(result)