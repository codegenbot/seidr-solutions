```python
import ast

def fruit_distribution(s):
    apple_count, orange_count = map(ast.literal_eval, s.split("apples"))
    return 100 - (apple_count + orange_count)
```