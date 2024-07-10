```
def generate_integers(a, b):
    if a > b:
        a, b = b, a
    return [i for i in range(a, b+1) if str(i).endswith('0') or str(i).endswith('2'), '4', '6', '8']