```python
def triples_sum_to_zero(l: list):
    l = set(l)
    for i in l:
        for j in l:
            if j == i:
                continue
            for k in l:
                if k == i or k == j:
                    continue
                if i + j + k == 0:
                    return True
    return False