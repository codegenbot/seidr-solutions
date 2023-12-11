Solve the following code contest problem: Python/140. Problem description: Complete the following code given the task description and function signature.. Currently, the code is ```
import re

def fix_spaces(text):
    return re.sub(r"\s+", "_", text)
``` Modify the code as The issue is that the `fix_spaces` function is not replacing all whitespace characters with underscores, but only the first one it encounters. To fix this, you can use the `re.sub` function with the `g` flag to replace all occurrences of whitespace characters in the input string.```
import re

def fix_spaces(text):
    return re.sub(r"\s+", "_", text, flags=re.M)
``` This will ensure that all whitespace characters are replaced with underscores, not just the first one encountered.. You must only return correct code. Remove any triple quotes, language name or explanations.