```python
def fix_spaces(text): return text.replace(" ", "_").replace("__", "-").replace("-", "", 1) if text.startswith("_") else text.replace(" ", "_").replace("__", "-")