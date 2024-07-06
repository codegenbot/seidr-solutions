```python
import re
def fix_spaces(text):
    return re.sub(r'\s+', '_', text)

# test case
assert fix_spaces("Exa  1  2  2  mple") == "Exa_1_2_2_mple"