def histogram(test):
    import re
    from collections import Counter
    if not test:
        return {}
    cleaned_test = re.sub(r'\W+', ' ', test.lower().strip())
    test_list = cleaned_test.split()
    count = Counter(test_list)
    max_count = max(count.values())
    return {k: v for k, v in count.items() if v == max_count}

if __name__ == "__main__":
    import sys
    try:
        test = sys.stdin.read().strip()
        result = histogram(test)
        print(result)
    except Exception as e:
        print("Error:", e)