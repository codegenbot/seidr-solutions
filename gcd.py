```
def gcd(a, b):
    from math import gcd, abs

def indices_of_substring(text, target):
    return [i for i in range(len(text)) if text[i:i+len(target)] == target or text[i-1:i+len(target)-1] == target]
``` 
This code checks if `target` appears at the beginning of `text` (`text[i:i+len(target)] == target`) and also checks if it appears at the end of `text` (`text[i-1:i+len(target)-1] == target`). If either condition is true, then we know that `target` overlaps with itself in `text`, so we add `i` to the list of indices.

For example, if `text = "hello"` and `target = "ll"`, this code would return `[2, 3]` because both occurrences of `"ll"` overlap with each other..