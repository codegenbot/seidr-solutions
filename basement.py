```
def basement(vector):
    total = 0  
    becomes_negative_at = -1
    for i, num in enumerate(vector):
        total += num
        if total < 0 and becomes_negative_at == -1:
            becomes_negative_at = i + 1
    return becomes_negative_at