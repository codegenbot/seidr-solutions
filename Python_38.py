```python
def decode_cyclic(input):
    if isinstance(input, str):
        groups = [input[(3 * i):min((3 * i + 3), len(input))] for i in range((len(input) + 2) // 3)]
        decoded_groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
        return "".join(decoded_groups)
    elif isinstance(input, list):
        return [decode_cyclic(s) for s in input]
```
