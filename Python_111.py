import re
from collections import Counter

def histogram(test):
    if not test:
        return {}
    test_list = re.findall(r'\b\w+\b', test.lower())
    count = Counter(test_list)
    max_count = max(count.values())
    return {k: v for k, v in count.items() if v == max_count}

if __name__ == "__main__":
    test = input().strip()
    result = histogram(test)
    print(result)