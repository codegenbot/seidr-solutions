def histogram(test):
    import re
    from collections import Counter
    if not test:
        return {}
    cleaned_test = re.sub(r'\W+', ' ', test.lower().strip())
    test_list = cleaned_test.split()
    count = Counter(test_list)
    if not count:
        return {}
    max_count = max(count.values())
    return {k: v for k, v in count.items() if v == max_count}

if __name__ == "__main__":
    import sys
    input = sys.stdin.read
    lines = []
    for line in sys.stdin:
        lines.append(line.strip())
    test = ' '.join(lines)
    result = histogram(test)
    print(result)