Solve the following code contest problem: Python/140
Problem description: Complete the following code given the task description and function signature..
Currently, the code is 
```
def fix_spaces(text):
    return text.replace("  ", "-").replace(" ", "_")
```
Modify the code to properly handle multiple spaces in a row. This is necessary because the `replace` method only replaces the first occurrence of the specified substring, so if there are multiple spaces in the input string, they will not all be replaced. To fix this, you can use the `re` module to replace all occurrences of multiple spaces with a single underscore:
```
import re

def fix_spaces(text):
    return re.sub(r"\s+", "_", text)
```