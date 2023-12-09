```python
import ast

def fruit_distribution(s):
    apple_count, orange_count = map(ast.literal_eval, s.split("apples"))
    mango_count = 100 - (apple_count + orange_count)
    return mango_count
```