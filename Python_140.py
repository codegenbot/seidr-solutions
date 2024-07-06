```python
def fix_spaces(text):
    if text.strip().startswith(' '):
        return '_' + '-'.join(['_' if c.isspace() else c for c in text.strip()[1:]])
    return '-'.join(['_' if c.isspace() else c for c in text])