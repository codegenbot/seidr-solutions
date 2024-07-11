```python
import re
def fix_spaces(text):
    return re.sub(r'  +', '-', re.sub(r'\s+', '_', text))