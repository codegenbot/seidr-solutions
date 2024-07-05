def histogram(test):
    from collections import Counter
    import re

    if not test:
        return {}

    cleaned_test = re.sub(r"\W+", " ", test.lower()).strip()
    words = cleaned_test.split()
    count = Counter(words)

    if not count:
        return {}

    max_count = max(count.values())
    return {k: v for k, v in count.items() if v == max_count}

if __name__ == "__main__":
    import sys
    input_lines = sys.stdin.readlines()
    for test in input_lines:
        test = test.strip()
        if test:
            result = histogram(test)
            print(result)