def histogram(test):
    from collections import Counter
    if not test.strip():
        return {}
    test_list = test.split()
    count = Counter(test_list)
    max_count = max(count.values())
    return {k: v for k, v in count.items() if v == max_count}

if __name__ == "__main__":
    import sys
    test = sys.stdin.read().strip()
    result = histogram(test)
    print(result)