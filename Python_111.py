def histogram():
    from collections import Counter

    test = input().strip()
    if not test:
        return {}
        
    counts = Counter(test.split())
    max_count = max(counts.values())
    return {k: v for k, v in counts.items() if v == max_count}

result = histogram()
print(result)