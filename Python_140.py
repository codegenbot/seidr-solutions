Solve the following code contest problem: Python/140. Problem description: Complete the following code given the task description and function signature.
```
def fix_spaces(text):
    return re.sub(r"\s+", "_", text)
```
The issue with the code is that it uses `re` module, which is not defined. To fix this, you need to import the `re` module at the beginning of your code:
```python
import re

def fix_spaces(text):
    return re.sub(r"\s+", "_", text)
```