def histogram(test):
    from collections import Counter

    count = Counter(test.split())
    max_count = max(count.values(), default=0)
    return {k: v for k, v in count.items() if v == max_count}


if __name__ == "__main__":
    import sys

    test = sys.stdin.read().strip()
    result = histogram(test)
    print(result)