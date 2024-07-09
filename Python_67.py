```python
import re

def fruit_distribution(s, n):
    s = re.sub(r' apples', '', s)
    s = re.sub(r' oranges', '', s)
    return n - int(re.sub(r'[a-z ]*and *([0-9]+)', r'\1', s).split()[0]) - 1